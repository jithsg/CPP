#include <iostream>
#include <string>

int main(){
  std::string UserInput;

  std::cout << "Enter some text: ";
  std::getline(std::cin, UserInput);
  std::cout << "You entered: " << UserInput;
}