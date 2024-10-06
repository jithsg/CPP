#include<iostream>

#include<cstring>
int main(){
    // char Letter;
    // Letter = 'A';
    // std::cout<<Letter<<std::endl;
    // const char* myString;
    // myString = "Hello";
    // std::cout<<myString<<std::endl;
    // // return 0;
    // // char mystring[6] = "Hello";
    // // std::cout<<mystring<<std::endl;
    // const char* mystring = "Hello";
    // std::cout<<strlen(mystring)<<std::endl;
    const char* A {"Bear"};
    const char* B {"Bear"};
    const char* C {"Zebra"};

    if (strcmp(A,B) == 0){
        std::cout<<"A and B are the same"<<std::endl;
    }
     if (strcmp(B,C) < 0){
        std::cout<<"B comes befor C " <<std::endl;
    }
    
}