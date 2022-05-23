 // Class Functions - Header
 // classFunction.h
class Horse {
     unsigned age;
     unsigned no;
     static unsigned noHorses;
 public:
     Horse(unsigned a);
     void display() const;
     ~Horse();
     static unsigned howMany(); // class function
 };
