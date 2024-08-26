
#include <iostream>

struct Rock {
  void Render() {
    std::cout << "Rendering a Rock";
  }
};

template <typename T>
void Render(
  T Object,
  decltype(Object.Render())* y = nullptr
) {
  std::cout << "Template Function Called\n";
  Object.Render();
}

void Render(float x) {
  std::cout << "Non-Template Function Called\n";
}

int main() {
  Render(3.14);
  Render(Rock{});
}