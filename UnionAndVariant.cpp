#include <iostream>
#include <variant>

union NumberUnion{
    int i;
    float f;
};

// struct sample{
//     sample()=delete;
// };

int main(){
using std::cout, std::endl, std::string;
// NumberUnion num;
// num.i = 42;
// std::cout<<num.i<<std::endl;
// // num.f = 3.14;
// std::cout<<num.f<<std::endl;
std::variant<int, float, string> num;
num=3;
num=3.3f;
num="hello";
cout<<std::get<string>(num)<<endl;
// num = 3;
// cout<<std::get<sample>(num)<<endl;
// num = 3.14f;
// cout<<get<float>(num)<<endl;  

// num="Hello";
// cout<<get<string>(num)<<endl;



}