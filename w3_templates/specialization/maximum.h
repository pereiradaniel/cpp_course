// Template Specialization
// maximum.h
#include <cstring>
template <class T>
 T maximum(T a, T b) {
    return a > b ? a : b;
}

// specialization for char* types
// template <> // denotes specialization
// const char* maximum<const char*>(const char* a, const char* b) {
//      return std::strcmp(a, b) > 0 ? a : b; 
// }
