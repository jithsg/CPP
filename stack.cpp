
#include <iostream>
#include <string>
#include <memory> 
using namespace std;
class Character {
public:
    std::string name;
    int health;
    
    Character(std::string n, int h) : name(n), health(h) { }


    // Method to display character info
    void display() {
        std::cout << "Name: " << name << ", Health: " << health << std::endl;
    }
};


int main() { 
    // Uniform (curly brace) initialization
    unique_ptr<Character> ptr1 {make_unique<Character>("Player1", 100)};
    auto ptr2 {make_unique<Character>("Player2", 200)};
    ptr1->display();
    ptr2->display();

}