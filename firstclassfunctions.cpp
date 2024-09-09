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
    bool isOnline ()const{
        return true;
    }
};

class Party{
    public:
    Player PlayerOne;
    Player PlayerTwo;
    Player PlayerThree;
    

   bool all_of(auto Predicate){
    return Predicate(PlayerOne) && Predicate(PlayerTwo) && Predicate(PlayerThree);
   }
   bool any_of(auto Predicate){
    return Predicate(PlayerOne) || Predicate(PlayerTwo) || Predicate(PlayerThree);
   }
    
};


bool PlayerisAlive(const Player& player){
    return player.isAlive();
}


bool PlayerisOnline(const Player& player){
    return player.isOnline();
}


int main(){
    Party MyParty;

    if (MyParty.all_of(PlayerisOnline)){
        std::cout<<"All players are online"<<std::endl;
    }
    else{
        std::cout<<"Not all players are online"<<std::endl;
    }
   
   if (MyParty.any_of(PlayerisOnline)){
        std::cout<<"At least one player is online"<<std::endl;
    }
    else{
        std::cout<<"No players are online"<<std::endl;
    }

}


