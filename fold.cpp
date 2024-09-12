#include <iostream>

// template <typename T>
// T Log(T x){
//     std::cout << "arg: " << x << std::endl;
//     return x;

// }



// template <typename ...Types>
// auto fold(Types ...args){
//     return (Log(args) +...);

// }



// int main(){
//     std::cout << fold(1, 2, 3, 4, 5) << std::endl;
//     return 0;
// }




// template<typename ...Types>
// void fold(Types ...args){
//     (
//         [&](){std::cout << args << std::endl;}(),...);
// }

// int main(){
//     fold(1, 2, 3, 4, 5);
//     return 0;
// }


// template<typename ...Types>
// void rightfold(Types...Args){
//     std::cout<<(Args-...-0)<<std::endl;
// }

// template<typename ...Types>
// void leftfold(Types...Args){
//     std::cout<<(0-...-Args)<<std::endl;
// }

// int main(){
//     leftfold(1, 2, 3, 4, 5);
//     rightfold(1, 2, 3, 4, 5);
//     return 0;
// }

template<typename ...Types>
void fold(Types ...args){
    (std::cout<<...<<args)<<std::endl;
}

int main(){
    fold(1, 2, 3, 4, 5);
    return 0;
}