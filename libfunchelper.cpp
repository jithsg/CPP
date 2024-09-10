#include<iostream>
#include<functional>
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

void Call(std::function<void(int, int)> func, int x, int y){
    func(x, y);

}


void func(int x, int y){
    std::cout<<"x: "<<x<<std::endl;
    std::cout<<"y: "<<y<<std::endl;
}

int main(){
    Call(func, 10, 20);
    return 0;

}
