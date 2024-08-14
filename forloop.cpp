#include <iostream>
#include <vector>
using namespace std;
class Character {
 public:
  string Name;
};

int main() {
  Character Legolas{"Legolas"};
  cout << "Name of character is " << Legolas.Name << std::endl;
    return 0;
}