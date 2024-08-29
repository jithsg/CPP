#include <iostream>
#include<type_traits>
#include <cassert>
#include<stdexcept>
using namespace std;


// template<typename T>
// T square(T x) {
//     static_assert(is_floating_point_v<T>, "T must be a floating point type");

//     return x * x;
// }

// int main() {
//     cout << square(5.5) << endl;
//     cout << square("Hi") << endl;

//     return 0;
// }

// auto Square(floating_point auto x) {

//     return x * x;
// }

// int main() {
//     cout << Square(5.5) << endl;
//     cout << Square("Hi") << endl;

//     return 0;
// }
// #include <iostream>
// #include <cassert>

// class Character {
// public:
//   std::string GetName() {
//     return "Legolas";
//   };
// };

// void LogName(Character* Player) {
//   assert(Player);  
//   std::cout << Player->GetName();
// }

// int main() {
//     Character player;
//     Character* playerPtr = &player;
//   LogName(playerPtr);
// }

// int divide(int x, int y) {
//     assert(("Denominator must be non-zero", y != 0));
//     return x / y;
// }


// int main() {
//     cout << divide(10, 0) << endl;
//     return 0;
// // }
// #include <iostream>

// int Divide(int x, int y) {
//   if (y == 0)
//   { throw 0; }
//   return x/y;
// }

// int main() {
//   Divide(5, 0);
// }
// #include <iostream>
// #include <stdexcept>

// double Divide(double a, double b) {
//     if (b == 0) {
//         throw std::runtime_error("Division by zero error");
//     }
//     return a / b;
// }

// int main() {
//     try {
//         double result = Divide(10.0, 0.0);  // This will cause a division by zero
//         std::cout << "Result: " << result << std::endl;
//     } catch (const std::runtime_error& e) {
//         std::cout << "Caught an exception: " << e.what() << std::endl;
//     }

//     std::cout << "Program continues..." << std::endl;

//     return 0;
// }
// #include <iostream>

// int Divide(int x, int y) {
//   if (y == 0) throw "Cannot divide by zero";  
//   return x / y;
// }

// int main() {
//   try {
//     Divide(5, 0);
//   } catch (...) {
//     std::cout << "I caught an error";
//   }

//   std::cout
//     << "\nThe program can continue as normal";
// }


int Divide(int x, int y){
    if (y==0) throw invalid_argument("Cannot divide by zero");

    
            return x/y;
}

int main(){
    try {
        Divide (5, 0);
    } 
    catch(invalid_argument& e) {
        cout << "I caught an error"<<endl;
        cout<< e.what()<<endl;
    }
    cout << "\nThe program can continue as normal";

}
