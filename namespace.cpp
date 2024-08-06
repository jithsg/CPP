#include <iostream>

namespace Demo{
    void Display(){
        std::cout << "Display function from Demo namespace" << std::endl;
    }
}


using namespace Demo;
int main(){
    Display();
    return 0;

}