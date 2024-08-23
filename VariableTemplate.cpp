#include<iostream>


template<typename T>
constexpr T pi {3.1415926535897932385};
struct CustomType{
    int mValue;

    CustomType(float value): mValue(int(value)){}
 };

int main(){
    auto c {pi<CustomType>};
    std::cout << c.mValue << std::endl;
    return 0;
}