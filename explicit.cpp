#include<iostream>

class MyClass{
    public:
    int mValue;
    explicit MyClass(int value):mValue(value){}

    explicit operator int() const{
        return mValue;
    }
};

void disp(const MyClass& mc){
    std::cout<<mc.mValue<<std::endl;
}

int main(){
   
   MyClass obj(10);

   int num = static_cast<int>(obj);
   std::cout<<num<<std::endl;
   return 0;
}