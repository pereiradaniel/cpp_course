// Unnamed Namespace for dot and hat
// dot_hat.cpp

// The function definition fill() is visible to namespaces dot and hat, which are within the translation unit dot_hat.cpp.  fill() is invisible outside dot_hat.cpp.

#include "dot.h"
#include "hat.h"
namespace {
    const char* fill(char* s, char c, int n) { 
        for (int i = 0; i < n; i++)
            s[i] = c;
        s[n] = '\0';
        return s;
    }
}
namespace dot {
    const char* leader(char* s) {
        return fill(s, '.', ML);
    }
}
namespace hat {
    const char* leader(char* s) {
        return fill(s, '^', ML);
    }
}