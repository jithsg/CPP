#include<iostream>

int main(){
    int x = 10;
    int y = 2;

    auto result = x<=>y;

    if (result<0){
        std::cout<<"x is less than y"<<std::endl;
    }
    if (result>0){
        std::cout<<"x is greater than y"<<std::endl;
    }

    if (result==0){
        std::cout<<"x is equal to y"<<std::endl;

    }

    
}