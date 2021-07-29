// Copying Files
// fileCopy.cpp

#include <fstream>

int main(int argc, char agrv[]) {
    std::ifstream source(argv[1]);
    std::ofstream destination(argv[2]); 

    destination << source.rdbuf();
}