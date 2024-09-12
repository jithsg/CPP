#include <iostream>



// template<typename...Types>
// void myfunc(Types...args){
//     (std::cout<<...<<args)<<std::endl;
// //     std::cout<<"Hello"<<std::endl;
// //     std::cout<<sizeof...(args)<<std::endl;
// //     if constexpr(sizeof...(args) == 0){
// //         std::cout<<"No args"<<std::endl;
// //     }
// //     else{
// //         std::tuple Tuple{args...};
// //         std::cout<<std::get<0>(Tuple)<<std::endl;
// //     }
    

// // 
// }

// int main(){
//     myfunc(1,2,3,4,5);

//     myfunc(1,2,3);
//     myfunc(1,2,3,4,"hello");
//     return 0;
// }

// int sum_n(int x){
//     if (x==1) return 1;
//     // std::cout<<x<<std::endl;
//     return x + sum_n(x-1);
// }

// int mult(int x, int y){
//     if (y==1) return x;
//     return x + mult(x, y-1);

// }

// int main(){
//     // std::cout<<sum_n(100)<<std::endl;
//     std::cout<<mult(10, 10)<<std::endl;
//     return 0;
// }