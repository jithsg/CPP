#include <iostream>

class MyClass{
    public:
    int mValue;

    MyClass(int value):mValue(value){}

    MyClass operator+(MyClass& other){
        return MyClass{this->mValue + other.mValue};
    }

    bool operator==(MyClass& other){
        return this->mValue == other.mValue;
    }

    MyClass& operator=(MyClass& other){
        other.mValue= this->mValue;
        return *this;
    }

    MyClass& operator++(){
        this->mValue++;
        return *this;
    }


};

int main(){
    MyClass a(10);
    MyClass b(20);
    a=b;
    std::cout<<a.mValue<<std::endl;
    return 0;
}