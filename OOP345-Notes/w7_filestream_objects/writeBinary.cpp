// Binary Access - Writing
// writeBinary.cpp

#include <fstream>

int main(int argc, char* argv[]) {

    char str[] = "Hello World";

    std::ofstream f(argv[1], std::ios::out|std::ios::binary|std::ios::trunc); 

    f.write(str, sizeof str - 1);
}