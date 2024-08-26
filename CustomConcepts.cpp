#include<concepts>
#include<iostream>
using namespace std;

template<typename T>
concept Numeric = integral<T> || floating_point<T>;



template<Numeric T>
T add(T a, T b) {
    return a+b;
}

int main() {
    cout<<add(10, 20)<<endl;
    return 0;
}