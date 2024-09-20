#include<iostream>

// class MyClass{
//     public:
//     int mValue;
//     explicit MyClass(int value):mValue(value){}

//     explicit operator int() const{
//         return mValue;
//     }
// };

// void disp(const MyClass& mc){
//     std::cout<<mc.mValue<<std::endl;
// }

// int main(){
   
//    MyClass obj(10);

//    int num = static_cast<int>(obj);
//    std::cout<<num<<std::endl;
//    return 0;
// }

class NonDefaultConstructible {
public:
    NonDefaultConstructible() = delete; // Prevents default construction
    NonDefaultConstructible(int value) : data(value) {}
private:
    int data;
};
int main() {
    // NonDefaultConstructible obj; // This will result in a compilation error
    NonDefaultConstructible obj(42); // This is allowed
    return 0;
}