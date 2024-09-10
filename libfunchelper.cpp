
// using Type = void (*)();
// void Call(std::invocable auto Greet){
//     Greet();

// }

// void Greet(){
//     std::cout<<"Hello!"<<std::endl;

// }

// struct Greeter{
//     public:
//     void operator()(){
//         std::cout<<"Hello!"<<std::endl;
//     }
// };

// int main(){
//     Call(Greet);
//     Call(Greeter());
//     Call([]{std::cout<<"Hello!"<<std::endl;});
//     return 0;
// }
// using Func = void(*)(int, int);
// void Call(Func func, int x, int y){
//     func(x, y);

// }


// void func(int x, int y){
//     std::cout<<"x: "<<x<<std::endl;
//     std::cout<<"y: "<<y<<std::endl;
// }

// int main(){
//     Call(func, 10, 20);
//     return 0;

// }


// void Call(std::function<void(int, int)>func){
//     func(1,2);

// }


// void func(int x, int y){
//     std::cout<<"x: "<<x<<std::endl;
//     std::cout<<"y: "<<y<<std::endl;
// }

// struct Functor{
//     public:
//     void operator()(int x, int y){
//         std::cout<<"x: "<<x<<std::endl;
//         std::cout<<"y: "<<y<<std::endl;
//     }
// };

// int main(){
//     Call(func);
//     Call(Functor());
//     Call([](int x, int y){
//         std::cout<<"x: "<<x<<std::endl;
//         std::cout<<"y: "<<y<<std::endl;
//     });


//     return 0;

// }

// void Call(std::invocable<int, int>auto func){
//     func(1,2);

// }


// void func(int x, int y){
//     std::cout<<"x: "<<x<<std::endl;

//     std::cout<<"y: "<<y<<std::endl;
// }

// struct Functor{
//     public:
//     void operator()(int x, int y){
//         std::cout<<"x: "<<x<<std::endl;
//         std::cout<<"y: "<<y<<std::endl;
//     }
// };

// int main(){
//     Call(func);
//     Call(Functor());
//     Call([](int x, int y){
//         std::cout<<"x: "<<x<<std::endl;
//         std::cout<<"y: "<<y<<std::endl;
//     });


//     return 0;

// }

#include<iostream>
#include<functional>
#include<concepts>
class Player{
    public:
    bool isOnline() const{
        return true;
    }
};

class Party{
    private:
    Player player1;
    Player player2;
    Player player3;

    public:
    bool all_of(std::invocable<const Player&>auto P){
        return P(player1) && P(player2) && P(player3);

    }
};

struct OnlineChecker{
    bool operator()(const Player& player){
        return player.isOnline();
    }

};


int main(){
    Party party;
    if (party.all_of(OnlineChecker())){
        std::cout<<"All players are online"<<std::endl;
    }
    else{
        std::cout<<"Not all players are online"<<std::endl;
    };
}