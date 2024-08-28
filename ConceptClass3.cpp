#include<iostream>

#include<concepts>
using namespace std;

template<typename T>

void Call(T t) {
    t();
}


void Hello() {
    cout << "Hello" << endl;
}

int main() {
    Call(&Hello);
    return 0;
}