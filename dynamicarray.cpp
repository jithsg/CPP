#include <iostream>
using namespace std;


class Sword{
  public:
  int mDamage {10};
  void swing(){
    cout << "Attacking with sword" << endl;
  }

};


class Player{

  public:
  Sword* mWeapon {nullptr};


  Player(Sword* weapon){
    mWeapon = weapon;
  }

  void attack(){
    mWeapon->swing();
  }  
       

};


int main(){

  Sword s1;

  Player p1(&s1);
  p1.attack();
  p1.mWeapon->mDamage=50;
  cout << "Damage: " << s1.mDamage << endl;

  Player p2{p1};
  cout<<p2.mWeapon->mDamage<<endl;

  return 0;



}