#include<tuple>
#include<iostream>
#include<type_traits>

template<typename T>
void checkType(T val){
    std::cout<<"Is integral: "<<std::is_integral_v<T> <<std::endl;
}


int main(){
    std::tuple<int, int, float> t1 {1, 2, 3.f};
    // std::cout<<std::get<0>(t1)<<std::endl;  
    // std::cout<<std::get<1>(t1)<<std::endl;
    // std::cout<<std::get<2>(t1)<<std::endl;

    auto [a, b, c] {t1};
    std::cout<<a<<std::endl;

    std::cout<<b<<std::endl;
    std::cout<<c<<std::endl;

    checkType(a);


    

}

