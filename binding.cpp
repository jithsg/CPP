#include<iostream>
#include<functional>


void func(int x, int y, int z){
    std::cout<<"x: " << x<<std::endl;
    std::cout<<"y: " << y<<std::endl;
    std::cout<<"z: " << z<<std::endl;
}

int main(){

auto Func_1 {std::bind_front(func, 10, 20)};

Func_1(30);
Func_1(40);
Func_1(50);
return 0;
}