#include <memory>
#include <iostream>
using namespace std;

struct Sword{
  Sword() = default;

  Sword(const Sword& other){
    cout << "Copy constructor" << endl;
  }

};

struct Player{
  Sword* mWeapon {nullptr};

  Player(Sword* weapon){
    mWeapon = weapon;
  }

  Player(const Player& other){
    mWeapon = other.mWeapon;
    cout << "Copy constructor for Player" << endl; 
  }

};

int main(){
  Sword s1;
  Player p1(&s1);
  Player p2 = p1;
  if (p1.mWeapon == p2.mWeapon){
    cout << "Same weapon" << endl;
  }

}
