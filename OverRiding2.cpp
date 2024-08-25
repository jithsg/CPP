#include <iostream>

struct Container {
  Container(int x) {}
};

// void Print(float x) {
//   std::cout << "float Function Called";
// }

void Print(Container x) {
  std::cout << "Container Function Called";
}

int main() {
  Print(42);
}