// Unions
// union.cpp

// An object of union type can only hold the value of one of its members at any particular time.

#include <iostream>
#include <cstring>

union Product { // some have skus, some have upcs 
    int sku;
    char upc[13];
};

int main() {
    Product cereal, tissue;
    cereal.sku = 4789;
    std::strcpy(tissue.upc, "0360002607555");
    std::cout << cereal.sku << std::endl;
    std::cout << tissue.upc << std::endl; 
}
