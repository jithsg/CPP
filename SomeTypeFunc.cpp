#include "SomeType.h"
#include<iostream>

int main(){
    SomeType A{5};
    SomeType B{10};
    std::cout << AddSomeType(A, B) << std::endl;
}