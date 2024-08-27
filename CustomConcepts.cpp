#include <concepts>
#include <iostream>

using namespace std;

template<typename T>
concept ConvertibleToFromInt = requires(T t) {
    requires convertible_to<T, int>;
    requires convertible_to<int, T>;
};

template<ConvertibleToFromInt T>
void TemplateFunction(int x) {
    cout << "That was convertible " << int(T(x)) << endl;
}

struct SomeType{
    SomeType(int x) : Value(x) {}
    operator int() { return Value; }
    int Value;
};

int main() {
    TemplateFunction<int>(5);
    SomeType st(10);
    TemplateFunction<SomeType>(st);
    return 0;
}
