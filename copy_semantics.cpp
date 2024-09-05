#include <iostream>

struct Sword{};

class Character{
    public:
        Character(): Weapon (new Sword{}){}
        ~Character(){delete Weapon;}
        Sword* Weapon;
};


int main(){
    using std::cout, std::endl;
    Character A;
    Character B {A};

    cout<<"A.Weapon: "<<A.Weapon<<std::endl;
    cout<<"B.Weapon: "<<B.Weapon<<std::endl;
}