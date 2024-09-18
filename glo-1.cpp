#include <iostream>
#include "globals.h"

void hello();

int main(){
    std::cout << "The value of global is: " << globalVariable << std::endl;
    hello();
    return 0;
}