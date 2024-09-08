#include <iostream>

// void foo(){
//     std::cout<<"I am a function"<<std::endl;
// }

// int add(int a, int b){
//     return a+b;
// }

// int main(){
// // void (*fptr)()= &foo;
// // std::cout<<fptr<<std::endl;

// using falias = int (*)(int, int);

// int (*addptr)(int, int) {&add};
// falias addptr2 {add};

// std::cout<<addptr(1,2)<<std::endl;
// std::cout<<addptr2(1,2)<<std::endl;
// addptr=nullptr;
// if (addptr){
// std::cout<<(*addptr)(1,2)<<std::endl;
// }

// }

class Player{
    public:
    bool isAlive ()const{
        return true;
    }
};

class Party{
    public:
    Player PlayerOne;
    Player PlayerTwo;
    Player PlayerThree;
    
};

int main(){
    Party MyParty;
    bool isEveryoneAlive{
        MyParty.PlayerOne.isAlive() &&
        MyParty.PlayerTwo.isAlive() &&
        MyParty.PlayerThree.isAlive()
    };

    if (isEveryoneAlive){
        std::cout<<"Everyone is alive"<<std::endl;
    }
    else{
        std::cout<<"Someone is dead"<<std::endl;
    }
}
