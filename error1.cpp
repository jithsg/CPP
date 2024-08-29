#include <iostream>
#include<type_traits>

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