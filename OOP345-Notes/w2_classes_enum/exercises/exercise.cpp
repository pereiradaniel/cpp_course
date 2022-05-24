 #include <iostream>
 using namespace std;

 class Account {
     long   cli;
     double bal;
     double acc;
     static double rate;
     static int noClients;
   public:
     Account(long c, double b = 0.0) : cli(c), bal(b), acc(0.0) {
         noClients++;
     }
     void transaction(double x) {
         if (bal >= -x) bal += x;
     }
     int client() const { return cli; }
     double balance() const { return bal; }
     double interest() { return acc; }
     double compound() { bal += acc; acc = 0.0; return bal; }
     double interest(int days) { return acc += bal * rate * days; }
     ~Account() { noClients--; }
     static int clients() { return noClients; }
 };

 ostream& operator<<(ostream& os, Account& a) {
     return os << a.client() << ':' << a.interest() << '|' << a.balance();
 }

 int    Account::noClients = 0;
 double Account::rate = 0.001;

 int main() {
     const double bonus  = 100.00;
     Account* account[3] = {0}; // An array of ptrs to Accounts of size 3, initialised to 0.
     int client = 1000;

     account[0] = new Account(client++);
     account[1] = new Account(client++, bonus);
     account[2] = new Account(client++, bonus);
     account[2]->transaction(100.00);   // ***account[2] stores a ptr!***
     for (int i = 0; i < 3; i++)
         cout << *account[i] << endl;
     account[0]->interest(10);
     account[1]->interest(10);
     account[2]->interest(10);
     for (int i = 0; i < 3; i++)
         cout << *account[i] << endl;
     account[0]->compound();
     account[1]->compound();
     account[2]->compound();
     for (int i = 0; i < 3; i++)
         cout << *account[i] << endl;
     account[2]->transaction(-300.00);

     delete account[0];
     delete account[1];
     cout << Account::clients() << endl;

     cout << *account[2] << endl;
     delete account[2];
     cout << Account::clients() << endl;

     return 0;
 }

 // OUTPUT
// 1000:0|0  
// 1001:0|100
// 1002:0|200
// 1000:0|0  
// 1001:1|100
// 1002:2|200
// 1000:0|0  
// 1001:0|101
// 1002:0|202
// 1
// 1002:0|202
// 0