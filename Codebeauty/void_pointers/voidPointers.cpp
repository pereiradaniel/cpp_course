#include <iostream>
using namespace std;
// Special type of pointer that can hold the value of any data type.
// You cannot directly dereference a void pointer!

// function that prints an integer
void printNumber(int* numberPtr) {
    // print out value that numberPtr is pointing to
    cout << *numberPtr << endl; // dereference pointer!
}
// function that prints a char
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