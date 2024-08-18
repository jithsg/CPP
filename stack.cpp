
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
  unique_ptr <Character> ptr= make_unique <Character> ("John", 100);
  ptr->display();
    return 0;
}