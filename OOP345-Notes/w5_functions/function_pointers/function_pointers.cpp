// Function Pointers
// function_pointers.cpp

#include <iostream>

// ascending order comparison
template <typename T>
bool ascending(T a, T b) { return a > b; }

// descending order comparison
template <typename T>
bool descending(T a, T b) { return a < b; }

// bubble sort
template <typename T>
// a function pointer receives the address of the function
// for the selected criterion in the last param of the
// sort() function:
void sort(T* a, int n, bool (*comp)(T, T)) { 
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            // comp is the name of the comparison function
            // used as a param
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
    int n = sizeof a / sizeof (int); // array size
    // sizeof the array a divided by the sizeof an int
    // to get number of array elements for n

    // type specialization <int> in the call to the sort
    // function addresses the ambiguity of the type to be
    // compared
    // without this specialization, compiler is not able
    // to determine for which type to generate comparison
    // code
    sort(a, n, ascending<int>);
    display(a, n);

    sort(a, n, descending<int>); //
    display(a, n);
}