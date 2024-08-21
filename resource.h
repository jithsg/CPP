#pragma once
#include <iostream>
template<typename T>
class Resource {
 public:
  T value;
  void Log(){
  std::cout << "Value: " << value << std::endl;
};
};

// template<typename T>
// void Resource<T>::Log() 
