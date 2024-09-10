#include<iostream>

using Type = void (*)();


void Call(auto Greet){
    Greet();

}

void Greet(){
    std::cout<<"Hello!"<<std::endl;

}

struct Greeter{
    public:
    void operator()(){
        std::cout<<"Hello!"<<std::endl;
    }
};


int main(){
    Call(Greet);
    Call(Greeter());
    Call([]{std::cout<<"Hello!"<<std::endl;});
    return 0;
}