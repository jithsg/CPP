#include<iostream>

void operator""_meters(unsigned long long meters){
    std::cout<<meters<<" meters"<<std::endl;
}

int main(){
    10_meters;
    20_meters;
    30_meters;
    40_meters;y
    
    return 0;
}