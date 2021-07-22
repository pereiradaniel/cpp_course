#include <iostream>
using namespace std;

// needs to be passed an integer pointer
void printNumber(int* numberPtr) {
    // print out value that numberPtr is pointing to
    cout << *numberPtr << endl; // dereference pointer!
}

void printLetter(char* charPtr) {
    cout << *charPtr << endl;
}

// Use a void pointer to create a function that prints out any data type:
// keep track of what type the void* ptr is pointing to!
void print(void* ptr, char type) {
    switch(type) {
        // void* will have to be cast into correct type
        case 'i':cout << *((int*)ptr) << endl;
        break;
        case 'c':cout << *((char*)ptr) << endl;
        break;
        case 'f':cout << *((float*)ptr) << endl;
        break;
        case 'd':cout << *((double*)ptr) << endl;
        break;
    }
}

int main()
{
    int number = 5;
    char letter = 'a';
    // printNumber(&number);
    // printLetter(&letter);
    print(&number, 'i');
    print(&letter, 'c');
    system("pause>0");
    return 0;
}