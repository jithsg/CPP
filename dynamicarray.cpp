#include <memory>
#include <iostream>
using namespace std;


struct Sword{
  string mName;

  Sword(string name): mName(name){
    cout << "Sword " << mName << " created" << endl;
  }
  Sword (const Sword& other){
    mName = other.mName;
    cout << "Copy constructor called" << endl;
  }

};



int main(){
  Sword s1("Excalibur");
  Sword s2(s1);
  
  cout <<s2.mName << endl;
}