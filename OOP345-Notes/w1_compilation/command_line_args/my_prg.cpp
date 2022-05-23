// Interfacing with the Host Platform
// my_prg.cpp

// argc = number of arguments
// argv = array of arguments

// Second argument receives an address of an array of pointers to C-style null-terminated strings.
//     - Each pointer holds the address of a string that holds one //     command-line argument.

#include <iostream>
int main(int argc, char *argv[])
{
    int i;
    std::cout << "Course : " << argv[0] << std::endl;
    for (i = 1; i < argc; i++)
        std::cout << "- " << argv[i] << std::endl;

    // inserted by the C++ compiler if the return statement is missing
    return 0;
}

// Compile and run from the command line with arguments:
// my_prg Assignments Workshops Tests Exam