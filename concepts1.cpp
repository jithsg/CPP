#include<concepts>
#include<iostream>
using namespace std;    


template<typename T>
class Base {
    public:
    T object;
    Base() {
        cout<<"Non-Integral template called"<<endl;
    }

};

template<integral T>
class Base<T>{
    public:
    T object;
    Base() {
        cout<<"Integral template called"<<endl;
    }

};


int main() {

    Base<int> b;
    
    b.object = 5;
    cout<<b.object<<endl;


    return 0;
}