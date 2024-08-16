#include<iostream>
using namespace std;


struct Character{
  int mHealth;

  Character(int health): mHealth(health) {cout << "Character constructor" << endl;};

  void PrintHealth(){
    cout << "Character Health: " << mHealth << endl;

  }
  ~Character(){cout << "Character destructor" << endl;}
};

struct Player: public Character{
  Player(int health): Character(health) {cout << "Player constructor" << endl;};

  void PrintHealth(){
    cout << "Player Health: " << mHealth << endl;
  }
  ~Player(){cout << "Player destructor" << endl;}
};

enum class Direction{
  Left, Right, Up, Down
};



int main(){
  Character c(100);
  c.PrintHealth();
  Player p(100);
  p.PrintHealth();
  Direction dir {Direction::Left};
  return 0;
}
