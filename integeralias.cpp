#include<iostream>
using namespace std;

using Integer = int;

int main(){

    Integer num {5};
    cout << "Number: " << num << endl;

    Integer*ptr1= &num;
    cout << "Pointer: " << *ptr1 << endl;

    const Integer*ptr2= &num;
    cout << "Pointer: " << *ptr1 << endl;


    Integer* const ptr3= &num;
    cout << "Pointer: " << *ptr1 << endl;

    const Integer* const ptr4= &num;
    cout << "Pointer: " << *ptr4 << endl;

}