#include <memory>
#include <iostream>
using namespace std;

int Add(int x, int y) {
  return x + y;
}

// Float Overload
float Add(float x, float y) {
  return x + y;
}


int main() {
 cout<<Add(1, 2)<<endl;
cout<<Add(int(1.0f), int(2.0f))<<endl;

return 0;

}