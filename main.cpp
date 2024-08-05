
#include "Circle.h"
#include <iostream>
using namespace std;
int main() {
  Geometry :: Circle c(5);
  cout<< "Area of circle is " << c.Area() << endl;
  cout<< "Circumference of circle is " << c.Circumference() << endl;
  return 0;

}