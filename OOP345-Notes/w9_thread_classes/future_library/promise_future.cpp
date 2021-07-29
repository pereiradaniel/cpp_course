
// Promise - Future
// promise_future.cpp

#include <iostream>
#include <thread>
#include <future>

void task(std::promise<double>& p) {
    p.set_value(12.34);
}

int main() {
    std::promise<double> p;
    std::future<double> f = p.get_future();
    std::thread t(task, std::ref(p));
    std::cout << "Value = " << f.get()<< std::endl; 
    t.join();
}