#include <iostream>



template<typename...Types>
void myfunc(Types...args){
    (std::cout<<...<<args)<<std::endl;
//     std::cout<<"Hello"<<std::endl;
//     std::cout<<sizeof...(args)<<std::endl;
//     if constexpr(sizeof...(args) == 0){
//         std::cout<<"No args"<<std::endl;
//     }
//     else{
//         std::tuple Tuple{args...};
//         std::cout<<std::get<0>(Tuple)<<std::endl;
//     }
    

// 
}

int main(){
    myfunc(1,2,3,4,5);

    myfunc(1,2,3);
    myfunc(1,2,3,4,"hello");
    return 0;
}
