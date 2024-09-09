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
isEven(4, []{
    std::cout<<"Even Number"<<std::endl;
});

    return 0;

}