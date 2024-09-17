#include <iostream>

extern int internalVariable;


static void functionFromFile1(){
    std::cout<<"Hello from File1.cpp"<<std::endl;
    std::cout<<"internalVariable: "<<internalVariable<<std::endl;
}


void publicFunction1(){
    functionFromFile1();
}