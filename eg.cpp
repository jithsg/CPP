#include <iostream>
using namespace std;
class MyClass {
    public:
    int mValue;
    MyClass(int value) : mValue(value) {}
    operator double() {return mValue;}
    
    };

int main() {
    MyClass obj1(10);  // Direct initialization
    double d = obj1;   // Implicit conversion
    return 0;
}
