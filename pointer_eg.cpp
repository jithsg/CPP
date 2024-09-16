// #include<iostream>

// class   Player{
//     private:
//     int mHealth;
//     public:
//     bool isDead()const{
//         return mHealth<=0;
//     }
// };


// void func(){
//     std::cout<<"Hello"<<std::endl;
// }

// int main(){

// bool (Player::*fptr)() const = &Player::isDead;

// Player player;
// bool result = (player.*fptr)();
// std::cout<<result<<std::endl;

// return 0;

#include <iostream>
#include <ranges>

int main(){
  for (int x : std::views::iota(1, 11)) {
    std::cout << x << ", ";
  }
}
