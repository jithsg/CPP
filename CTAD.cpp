#include <iostream>

template <int SomeInt>
class Resource {
 public:
  int Value{SomeInt};
};

int main() {
  Resource<42> A;
  std::cout << "Value: " << A.Value;
}