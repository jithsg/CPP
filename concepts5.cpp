#include<iostream>
#include<concepts>
using namespace std;


template<typename T>
class Base {
    public:

    void Function() requires integral<T> {
        cout<<"Function called"<<endl;
    }

};

int main() {
    Base <int> b;
    b.Function();
    return 0;
}