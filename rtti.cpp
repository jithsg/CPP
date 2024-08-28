#include <typeinfo>
#include <iostream>
using namespace std;

int main() {
  int Number{42};
  
  // Obtain the type information
 const type_info& TypeInfo{typeid(Number)};
  
  // Print the name of the type
  std::cout << "Type of Number is: " << TypeInfo.name() << std::endl;

  return 0;
}
