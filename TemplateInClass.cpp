#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
 public:
  T1 first;
  T2 second;
};

template <typename T1, typename T2>
class Resource {
 public:
  Pair <T1, T2> Pair1;

};
int main() {
  Resource<int, double> A {Pair<int, double>{42, 3.14}};
  
  cout << "First: " << A.Pair1.first << ", Second: " << A.Pair1.second;
}