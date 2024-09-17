#include <iostream>

void SayHello();
namespace{
void SayHello(){
  std::cout << "Hello from greeting.cpp";
}
}
void greet(){
  ::SayHello();
}