#include "Character.h"
#include <iostream>

namespace Animal {
    void greet() {
        std::cout << "Hello from Animal namespace!" << std::endl;
    }
}

namespace Human {
    void greet() {
        std::cout << "Hello from Human namespace!" << std::endl;
    }
}
int main() {
Human :: greet();
Animal :: greet();
return 0;
}