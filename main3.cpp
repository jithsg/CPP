#include <iostream>
using namespace std;

class character{
  public:
    virtual void act(character* charptr){
      cout << "Character acting" << endl;
    }

};


class goblin: public character{
  public:
    void act(character* charptr)override{
      cout << "Goblin acting" << endl;
    }

};

class dragon : public character{
  public:
    void act(character* charptr)override{
      cout << "Dragon acting" << endl;
    }

};



void battle(character* charptr1, character*charpter2){
  charptr1->act(charpter2);;
  charpter2->act(charptr1);
}


int main(){
  goblin goblin1;
  dragon dragon1;

  battle(&goblin1, &dragon1);

  return 0;
}