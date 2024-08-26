#include<concepts>
#include<iostream>
#include<type_traits>
using namespace std;

class Player {};

class Monster {};

class Goblin : public Monster {};   

class Rock{};

template<typename T>
requires is_base_of_v<Monster, T> || is_base_of_v<Player, T> 

void Function(T object) {
    cout<<"Function called"<<endl;
}

int main() {
    Function(Player{});
    Function(Monster{});
    Function(Goblin{});
    // Function(Rock{});  // This will cause a compilation error because Rock is not derived from Monster or Player.
    return 0;
}



