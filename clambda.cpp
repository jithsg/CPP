#include <iostream>

void isEven(int num, auto callback){
    if (num % 2 == 0){
        callback();
    }
}


int main(){
//    auto myLambda { []{
//         std::cout<<"Hello from Lambda"<<std::endl;
//     }};

//     myLambda();
// isEven(4, []{
//     std::cout<<"Even Number"<<std::endl;
// });

//     return 0;

auto sum {[](int x, int y)->void{
    std::cout<<"Hello from Lambda, the sum is "<< x +y << std::endl;

}};
sum(1,2);
}

