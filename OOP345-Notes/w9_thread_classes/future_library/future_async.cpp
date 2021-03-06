// Future Class Template - Explicit Asynchronous Launch
// future_async.cpp

#include <iostream>
#include <future>

double get() { return 12.34; }

int main() {
    std::future<double> f; // default ctor
    std::future<double> g = std::async(get); // move-ctor 

    std::cout << "After Construction" << std::endl;
    std::cout << (f.valid() ? "f is valid" :
    "f is not valid") << std::endl; 
    std::cout << (g.valid() ? "g is valid" :
    "g is not valid") << std::endl; 

    f = std::move(g); // move-assignment

    std::cout << "After Assignment" << std::endl;
    std::cout << (f.valid() ? "f is valid" :
    "f is not valid") << std::endl; 
    std::cout << (g.valid() ? "g is valid" :
    "g is not valid") << std::endl; 

    double a = f.get(); // retrieve shared value

    std::cout << "After Retrieval" << std::endl;
    std::cout << (f.valid() ? "f is valid" :
    "f is not valid") << std::endl; 
    std::cout << (g.valid() ? "g is valid" :
    "g is not valid") << std::endl; 

    std::cout << "Return Value = " << a << std::endl;
}