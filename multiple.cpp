#include<iostream>

// class Human{
//     public:
//     int agility{8};
// };

// class Elf{
//     public:
//     int agility{10};
// };

// class HalfElf: public Human, public Elf{};


// int main(){

//     HalfElf elrond;

//     std::cout<<"Elrond's agility (human): "<<elrond.Human::agility<<std::endl;
//     std::cout<<"Elrond's agility (elf): "<<elrond.Elf::agility<<std::endl;
// }


class Character{
    public:
    // Character():mAgility(0){};
    int mAgility;
    Character(int agility):mAgility(agility){}
};

class Human: virtual public Character{
    public:
    Human():Character(8){}
};

class Elf: virtual public Character{
    public:
    Elf():Character(10){}
};

class HalfElf: public Human, public Elf{
    public:
    HalfElf():Character(0){}
};


int main(){

    // HalfElf elrond;

    // std::cout<<"Elrond's agility (human): "<<elrond.Human::mAgility<<std::endl;
    // std::cout<<"Elrond's agility (elf): "<<elrond.Elf::mAgility<<std::endl;

    // Human Aragorn;
    // Elf Legolas;

    // std::cout<<"Aragorn's agility: "<<Aragorn.mAgility<<std::endl;
    // std::cout<<"Legolas's agility: "<<Legolas.mAgility<<std::endl;

    HalfElf elrond;
    std::cout<<"Elrond's agility: "<<elrond.mAgility<<std::endl;
}