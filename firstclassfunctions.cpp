#include <iostream>

void foo(){
    std::cout<<"I am a function"<<std::endl;
}

int add(int a, int b){
    return a+b;
}

int main(){
// void (*fptr)()= &foo;
// std::cout<<fptr<<std::endl;

int (*addptr)(int, int) {&add};

std::cout<<addptr(1,2)<<std::endl;
}

