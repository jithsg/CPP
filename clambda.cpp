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

// auto sum {[](int x, int y)->void{
//     std::cout<<"Hello from Lambda, the sum is "<< x +y << std::endl;

// }};
// sum(1,2);
int Num {10};

int x {10};
int y {20};
int z {30};

[x, y, z](){
    std::cout<<"Hello from Lambda"<<std::endl;
    std::cout<<"x: "<<x<<std::endl;
    std::cout<<"y: "<<y<<std::endl;
    std::cout<<"z: "<<z<<std::endl;
}();
}

