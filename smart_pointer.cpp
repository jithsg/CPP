#include<iostream>
#include<memory>
using namespace std;


int main(){
    const unique_ptr<const int>ptr1 {make_unique<int>(10)};
    cout<<++(*ptr1)<<endl;
    ptr1.reset();
    cout<<ptr1.get()<<endl;
    return 0;
}