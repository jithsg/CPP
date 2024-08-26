#include<iostream>
#include<concepts>
using namespace std;

template<typename T>
requires integral<T>

T add(T a, T b) {
    cout<<"Integral template called"<<endl;
    return a + b;
}


template<typename T>
requires floating_point<T> || integral<T>

T add(T a, T b) {
    cout<<"Floating point template called"<<endl;
    return a + b;
}



int main() {
    int res_int = add(3, 4); 
    cout << res_int <<endl; // Works with int

    float res_float = add(3.4f, 2.4f);  // Works with float
    cout << res_float << endl;

    // double res_double = add(3.4, 2.4);  // This will cause a compilation error because double is not an integral type.
    // cout << res_double << endl;

    // cout << add<const char*>("Hello", "World") << endl;  // This will cause a compilation error because const char* is not an integral type.

    return 0;
}