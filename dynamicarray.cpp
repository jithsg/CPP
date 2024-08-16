#include <memory>
#include <iostream>
using namespace std;

int Add(int x, int y);
float Add(float x, float y);

int main() {
 cout<<Add(1, 2)<<endl;
cout<<Add(float(1.0f), float(2.0f))<<endl;
cout<<Add(static_cast<int>(1.0f), static_cast<int>(2.0f))<<endl;
return 0;

}


int Add(int x, int y) {
  return x + y;
}

// Float Overload
float Add(float x, float y) {
  return x + y;
}
