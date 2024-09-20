#include<iostream>

class MyClass{
    public:
    int mValue;
    explicit MyClass(int value):mValue(value){}
};

void disp(const MyClass& mc){
    std::cout<<mc.mValue<<std::endl;
}

int main(){
   
   disp(MyClass(42));
   return 0;
}