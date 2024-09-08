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

using falias = int (*)(int, int);

int (*addptr)(int, int) {&add};
falias addptr2 {add};

std::cout<<addptr(1,2)<<std::endl;
std::cout<<addptr2(1,2)<<std::endl;
}

