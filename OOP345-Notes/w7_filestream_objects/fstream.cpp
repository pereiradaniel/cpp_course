// File Objects - writing and reading
// fstream.cpp

#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {

    std::fstream f(argv[1],
    std::ios::in|std::ios::out|std::ios::trunc);
    f << "Line 1" << std::endl;   // line 1
    f << "Line 2" << std::endl;   // line 2
    f << "Line 3" << std::endl;   // line 3
    f.seekp(0, std::ios::beg);    // to the start of the file
    f << "****";                  // overwrite four characters
    f.seekp(4, std::ios::cur);    // 4 bytes beyond current
    f << "#";                     // overwrite one character
    std::streampos p = f.tellp(); // remember current position
    f.seekp(0, std::ios::end);    // to end of the file
    f << "The last line\n";       // add a line
    f.seekp(p);                   // jump back to pos
    f << "^";                     // overwrite one character

    char c;
    f.seekg(0, std::ios::beg);    // to the start of the file
    while (f.get(c))              // read 1 character at a time 
        std::cout << c;           // display the character
    f.clear();                    // clear failed (eof) state
    f.seekg(-8, std::ios::end);   // move 8 bytes from end
    while (f.get(c))              // read 1 character at a time
        std::cout << c;           // display the character read
    f.clear();                    // clear failed (eof) state
}