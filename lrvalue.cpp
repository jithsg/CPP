#include <iostream>

void SomeFunction(int& x) {
  std::cout << "That was an l-value\n";
}

void SomeFunction(int&& x) {
  std::cout << "That was an r-value\n";
}

int main() {
  int x{2};
  SomeFunction(x);
  SomeFunction(5);
}