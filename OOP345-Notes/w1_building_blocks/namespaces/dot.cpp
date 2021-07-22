// Extend Namespace for dot
// dot.cpp

// Let us expand each namespace to include the definitions for their leader() functions:

#include "dot.h"
namespace dot {
    const char* leader(char* s) {
        for (int i = 0; i < ML; i++) 
            s[i] = '.';
        s[ML] = '\0';
        return s;
    }
}
