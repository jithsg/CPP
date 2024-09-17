#include <iostream>
#include "file1.h"
#include "file2.h"

int main(){
    functionFromFile1();
    functionFromFile2();
    std::cout<<"sharedVariable: "<<sharedVariable<<std::endl;   
    return 0;
}