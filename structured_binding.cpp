// #include <iostream>
// #include <utility>
// using namespace std;    

// // struct vector3{
// //     int x;
// //     int y;
// //     int z;
// // };
// template<typename T>
// void HandlePair(T p){
//     auto [x,y] = p;
//     cout<<x<<endl;
//     cout<<y<<endl;
// }
// int main() {

//     // vector3 v1{1,2,3};
//     // auto [x,y,z] = v1;
//     // cout<<x<<endl;
//     // cout<<y<<endl;
//     // cout<<z<<endl;
//     pair<int, int> p1{1,2};
  

//     // ++p1.first;
//     // auto [x,y] = p1;
//     // cout<<x<<endl;
//     int x = 10;
//     int y = 20;

//     pair<const int&,const int*> p2{x,&y};
//     cout<<p2.first<<endl;
//     cout<<*(p2.second)<<endl;

// }

#include <utility>
#include <iostream>
#include <type_traits>




// template <typename T>
// void HandlePair(T Pair) {
//   std::cout << "First Type: "
//     << typeid(typename T::first_type).name();
//   std::cout << "\nSecond Type: "
//     << typeid(typename T::second_type).name();
// }

// int main() {
//   std::pair<int, bool> Pair;
//   HandlePair(Pair);
// }

template<typename T>
void HandlePair(T P) {
    constexpr bool FirstIsInt { std::same_as<int, typename T::first_type> };
    if constexpr (FirstIsInt) {
        std::cout << "First Type is int ";

    }

}
int main(){
    std::pair<int, bool> Pair;
    HandlePair(Pair);
}