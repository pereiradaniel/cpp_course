// Function Pointers
// array_function_pointers.cpp

#include <iostream>

// ascending order comparison
template <typename T>
bool ascending(T a, T b) { return a > b; }

// descending order comparison
template <typename T>
bool descending(T a, T b) { return a < b; }

// bubble sort
template <typename T>
void sort(T* a, int n, bool (*comp)(T, T)) { 
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (comp(a[j], a[j+1])) {
                T temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

template <typename T>
void display(T* a, int n) {
    for (int i = 0; i < n; i++)
        std::cout << a[i] << ' ';
    std::cout << std::endl;
}

int main() {
    int a[] = {1, 5, 2, 3, 6, 7, 2};
    // definition of an array of pointers to functions:
    // return-type: bool
    // (*identifier[n]): (*criterion[2])
    // (parameter-type-list) =: (int, int)
    // { initialization-list}: { ascending, descending}
    bool (*criterion[2])(int, int) = {ascending, 
    descending};
    int n = sizeof a / sizeof (int); // array size of n

    for (int i = 0; i < 2; i++) {
        sort(a, n, criterion[i]);
        display(a, n);
    }

    // the array of pointers declaration specifies the int type,
    // so there is no need to specialize the initial values
}