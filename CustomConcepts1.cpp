#include <iostream>
#include <concepts>

using namespace std;

// Define the concept that checks if a type T can be converted to and from int
template<typename T>
concept ConvertToFromInt = requires {
    requires std::convertible_to<T, int>;  // T must be convertible to int
    requires std::convertible_to<int, T>;  // int must be convertible to T
};

// Function template that only accepts types satisfying ConvertToFromInt
template<ConvertToFromInt T>
void TemplateFunction(int x) {
    cout << "That was convertible: " << int(T{x}) << endl;
}

// Generic function template for other types
template<typename T>
void TemplateFunction(int x) {
    cout << "That was not convertible" << endl;
}
struct SomeType {
  SomeType(int x) : Value{x} {};
  operator int() { return Value; };

  int Value;
};


int main() {
    TemplateFunction<int>(10);    // Satisfies ConvertToFromInt
    // TemplateFunction<double>(10); // Satisfies ConvertToFromInt
    // TemplateFunction<string>(10); // Does not satisfy ConvertToFromInt
    TemplateFunction<SomeType>(20); // Satisfies ConvertToFromInt

    return 0;
}
