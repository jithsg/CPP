#include <algorithm>
#include <iostream>
#include <vector>
#include<thread>
#include<chrono>
void Log(int Number){
  using namespace std::chrono_literals;
  std::this_thread::sleep_for(1s);
  std::cout << "Number: " << Number << '\n';
}

int main(){
  std::vector Numbers{1, 2, 3};

  std::for_each(Numbers.begin(), Numbers.end(),
                Log);
}