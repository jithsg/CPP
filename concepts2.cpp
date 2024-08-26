#include<iostream>
#include<concepts>
using namespace std;



template<typename T>
T add(T a, T b) {
    cout<<"Non-Integral template called"<<endl;
    return a + b;
}
template<integral T>
T add(T a, T b) {
    cout<<"Integral template called"<<endl;
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