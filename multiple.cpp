#include<iostream>

class Human{
    public:
    int agility{8};
};

class Elf{
    public:
    int agility{10};
};

class HalfElf: public Human, public Elf{};


int main(){

    HalfElf elrond;

    std::cout<<"Elrond's agility (human): "<<elrond.Human::agility<<std::endl;
    std::cout<<"Elrond's agility (elf): "<<elrond.Elf::agility<<std::endl;



}

