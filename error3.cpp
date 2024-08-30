#include<exception>
#include<iostream>

using namespace std;

// void MyFunction() {
//     terminate();
// }


// int main(){
//     try {
//         MyFunction();
//     }
//     catch(...) {
//         cout << "Caught an exception: " << endl;
//     }
// }

// void PrintMessage(const string&& message) {
//     cout << "Hello, World! " << message << endl;
// }

// int main(){
//  PrintMessage("This is a temporary message");
//     return 0;

// }


// void printMessage(std::string&& message) {
//     std::cout << "Message: " << message << std::endl;
// }

// int main() {
//     std::string tempMessage = "Hello, World!";

//     // Calling the function with an rvalue (temporary object)
//     printMessage("Temporary Message");

//     // Using std::move to cast lvalue to rvalue
//     printMessage(std::move(tempMessage));
    
//     cout<< tempMessage << endl;

//     return 0;
// }

void PrintMessage(const string&& message) {
    cout << "Hello, World! " << message << endl;
}


int main(){
   string tempMessage = "This is another temporary message";
 PrintMessage("This is a temporary message");
 PrintMessage(move(tempMessage));
 cout << tempMessage << endl;
    return 0;


}