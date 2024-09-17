#include "file2.h"
#include <iostream>

int sharedVariable = 10;

void functionFromFile2(){
    std::cout<<"Hello from file2.cpp"<<std::endl;
    std::cout<<"sharedVariable: "<<sharedVariable<<std::endl;
}