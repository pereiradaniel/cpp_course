// Closing a connection early
// fileCopy2.cpp

#include <fstream>

int main(int argc, char agrv[]) {
    std::ifstream source;
    std::ofstream destination(argv[3]);

    source.open(argv[1]); // open first file

    destination << source.rdbuf(); // copy

    source.close();       // close first file 
    source.open(argv[2]); // open second file

    destination << source.rdbuf(); // copy
}