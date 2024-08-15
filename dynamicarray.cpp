#include <iostream>
using namespace std;

struct Sword{
  int damage;
  Sword(int damage){
    this->damage = damage;
  }
  void swing(){
    cout << "Swinging sword for " << damage << " damage" << endl;
  }
};

struct player{
  Sword* sword {nullptr};

  player(Sword* sword){
    this->sword = sword;
  }


};

int main(){

  Sword sword1(10);
  player player1(&sword1);
  player1.sword->swing();




}