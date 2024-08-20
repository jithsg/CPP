#include <iostream>
#include <memory>

struct Sword {};

class Character {
 public:
  Character()
      : Weapon{std::make_unique<Sword>()} {};

  Character(const Character& Source) {
    std::cout << "I'm being copied!";
  }

  std::unique_ptr<Sword> Weapon;
};

int main() {
  Character A{};
  Character B{A};

  std::cout << "\nA's Weapon: " << A.Weapon;
  std::cout << "\nB's Weapon: " << B.Weapon;
}