#include <array>
#include <iostream>
using namespace std;
int main() {
  std::array Nums{1, 2, 3};
  auto Start{Nums.begin()};
  cout << "First element: " << *Start << endl;
}
