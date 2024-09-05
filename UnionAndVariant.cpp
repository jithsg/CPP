#include <iostream>
#include <variant>

union NumberUnion{
    int i;
    float f;
};



int main(){
using std::cout, std::endl, std::string;
// NumberUnion num;
// num.i = 42;
// std::cout<<num.i<<std::endl;
// // num.f = 3.14;
// std::cout<<num.f<<std::endl;
std::variant<int, float, string> num;
num = 3;
cout<<std::get<int>(num)<<endl;
num = 3.14f;
cout<<get<float>(num)<<endl;  

num="Hello";
cout<<get<string>(num)<<endl;



}