#include <memory>
#include <iostream>
using namespace std;

void func(int* ptr){
  cout << *ptr << endl;
}

int main(){
  auto ptr = make_unique<int>(10);
  func(ptr.get());
}