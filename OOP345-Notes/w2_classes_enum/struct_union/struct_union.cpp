// Structs with Unions
// struct_union.cpp

// There is no independent way of identifying a union's most recently accessed member.  To address this ambiguity, we wrap a union type within a struct type and declare an enumerator as a member of the struct type.  The enumerator identifies the most recently accessed member within the union type.  For example,

#include <iostream>
#include <cstring>

enum ProductId {sku, upc};

typedef struct {
    ProductId id; // enumeration type holds a symbol
    union { // some have skus, some upcs
        int  sku;
        char upc[13];
    } code;
} Product;

int main() {
    Product p[2];

    p[0].id = sku;
    p[0].code.sku = 4789;
    p[1].id = upc;
    std::strcpy(p[1].code.upc, "0360002607555");

    for (int i = 0; i < 2; i++)
        switch(p[i].id) {
        case sku:
            std::cout << p[i].code.sku << std::endl;
            break;
        case upc:
            std::cout << p[i].code.upc << std::endl; 
            break;
        }
}

// Note the type definitions and the two anonymous types in this example.