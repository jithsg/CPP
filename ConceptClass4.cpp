#include<iostream>

#include<concepts>
using namespace std;

void Greet() {
    cout << "Hello" << endl;
}

int main(){
    if (invocable<decltype(&Greet)>) {
        cout << "Greet is invocable" << endl;
    }
}