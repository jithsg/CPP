
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


// class Player{
//     public:
//     bool isOnline() const{
//         return true;
//     }
// };

// class Party{
//     private:
//     Player player1;
//     Player player2;
//     Player player3;

//     public:
//     bool all_of(std::invocable<const Player&>auto P){
//         return P(player1) && P(player2) && P(player3);

//     }
// };

// struct OnlineChecker{
//     bool operator()(const Player& player){
//         return player.isOnline();
//     }

// };


// int main(){
//     Party party;
//     if (party.all_of(OnlineChecker())){
//         std::cout<<"All players are online"<<std::endl;
//     }
//     else{
//         std::cout<<"Not all players are online"<<std::endl;
//     };
// }

// struct SomeType{
// };
// void Call(std::predicate auto Func){
//     std::cout<<"That was a predicate"<<std::endl;
// }

// void Call(auto Func){
//     std::cout<<"That was not a predicate"<<std::endl;
// }

// int main(){
//     Call([](){return SomeType();});
//     Call([](){return true;});
//     return 0;
// }
#include<iostream>
#include<functional>
#include<concepts>


// template<std::predicate<int, float> T>
// void logifTrue(T Predicate, int x, float y){
//     if(Predicate(x, y)){
//         std::cout<<"The predicate was true"<<std::endl;
//     }
//     else{
//         std::cout<<"The predicate was false"<<std::endl;
//     }
// }

// int main(){
//     logifTrue([](int x, float y){return x > y;}, 10, 5.5f);
//     return 0;
// }

// template<typename T>
// concept Addable = requires(T a, T b){
//     {a+b}->std::same_as<int>;
// };

// template<Addable T>
// T Add(T a, T b){
//     return a+b;
// }

// int main(){
//     std::cout<<Add(1,2)<<std::endl;
//     std::cout<<Add(1.5f, 2.5f)<<std::endl;
//     return 0;
// }

// template<typename ...Args>
// void print(Args...args){
//     (std::cout<<...<<args)<<std::endl;
// }

// int main(){
//     print<int, int, float>(1, 2, 3.0f);
//     return 0;
// }

// void func(int x, int y){
//     std::cout<<"x: "<<x<<std::endl;
//     std::cout<<"y: "<<y<<std::endl;
// }

// int main(){
//     std::function<void(int, int)> Callable{func};
//     Callable(1,2);
//     return 0;

// }

