#include <iostream>
using namespace std;


struct Sword {

};

struct Player{
  Sword* Weapon {nullptr};
  Player(Sword* weapon) : Weapon(weapon) {}

};

int main(){

Sword IronSword;
Player player1(&IronSword);
Player player2{player1};

}