#include <iostream>

// Declare Pi as extern since it's defined in another file
extern float Pi;

int main() {
    std::cout << "The value of Pi is: " << Pi << std::endl;
    return 0;
}
