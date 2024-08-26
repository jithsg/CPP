#include<iostream>
#include<string>
#include<type_traits>
using namespace std;

template<typename T>
concept Integral = std::is_integral_v<T>;  // Define the concept

template<Integral T>  // Use the concept to constrain the template
T add(T a, T b) {
    return a + b;
}

int main() {
    int res_int = add(3, 4);  // Works with int
    cout << res_int << endl;

    // double res_double = add(3.4, 2.4);  // This will cause a compilation error because double is not an integral type.
    // cout << res_double << endl;

    // cout << add<const char*>("Hello", "World") << endl;  // This will cause a compilation error because const char* is not an integral type.

    return 0;
}
