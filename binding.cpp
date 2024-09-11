#include<iostream>
#include<functional>


// void func(int x, int y, int z){
//     std::cout<<"x: " << x<<std::endl;
//     std::cout<<"y: " << y<<std::endl;
//     std::cout<<"z: " << z<<std::endl;
// }

// int main(){

// auto Func_1 {std::bind_front(func, 10, 20)};
// auto Func_2 {std::bind(func, 10, std::placeholders::_1, std::placeholders::_2)};
// Func_1(30);
// Func_1(40);
// Func_1(50);
// Func_2(30, 40);
// return 0;
// }

// class MyClass{
//     public:
//     void display(){
//         std::cout<<"Hello!"<<std::endl;
//     }
//     int add(int x, int y){
//         return x+y;
//     }
//     int val;

// };

// int main(){
//     MyClass obj;

//    void (MyClass::*fptr)();
//    fptr = &MyClass::display;
//    (obj.*fptr)();


//     int MyClass::*fptr2;
//     fptr2 = &MyClass::val;
//     obj.*fptr2 = 10;


// }



class Player{
    public:
    std::string Name;
    void GetName(){
        std::cout<<"Name: "<<Name<<std::endl;
    }
    void SetName(std::string name){
        Name = name;
    }

};


int main(){
    Player player{"Anna"};
    auto Func {std::bind(&Player::GetName, &player)};
    Func();
    auto Func2{std::bind(&Player::GetName, std::placeholders::_1)};
   
   Func2(player);
   
    }
