#include "character.h"
#include <iostream>
using namespace std;

Character::Character(int health): mHealth(health) {cout << "Character constructor" << endl;}
void Character:: PrintHealth(){cout << "Character Health: " << mHealth << endl;}
Character::~Character(){cout << "Character destructor" << endl;}