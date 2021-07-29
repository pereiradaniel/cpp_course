// Macros Side-Effects
// macrosSideEffects.i

// iostream declaractions here

int main() {
    double r = 2.35;
    std::cout << "PI(r++)^2 is " << 3.14 * ((r++) * (r++)) << std::endl; 
    std::cout << "r is now " << r << std::endl;
}