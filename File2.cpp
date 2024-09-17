#include<iostream>

void publicFunction1();
int internalVariable=10;

void publicFunction2(){
    std::cout<<"Hello from File2.cpp"<<std::endl;
    publicFunction1();
}

int main(){
    publicFunction2();
    std::cout<<"internalVariable: "<<internalVariable<<std::endl;
    std::cout<<"Hello from main"<<std::endl;
    return 0;
}