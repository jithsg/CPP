#include<iostream>

void func(){
    std::cout<<"throwing!!"<<std::endl;
    throw 0;
}


int main(){
    try{
        func();
    }
    catch(...){
        std::cout<<"Caught Exception"<<std::endl;
    }
}
