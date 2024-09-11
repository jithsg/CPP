#include<iostream>
#include<string>
#include<vector>

template<typename T1, typename T2>
auto Multiply(T1 x, T2 y)->decltype(x*y){
    if (x==0 || y==0) return 0;

    return x*y;
}

int main(){
    auto result {Multiply(10.0, 0.0)};
    auto result1 {Multiply(10, 0)};
    std::cout<<result<<std::endl;
    std::cout<<typeid(result).name()<<std::endl;
    std::cout<<typeid(result1).name()<<std::endl;
    std::cout<<typeid(Multiply(10.5f, 20.5f)).name()<<std::endl;
    return 0;
}

// int main(){
//     int x= 5;
//     decltype(x) y = 10;
//     std::cout<<typeid(y).name()<<std::endl;

// // }

// auto Multiply(int x, int y){
//     return decltype(x*y) {x*y};
// }