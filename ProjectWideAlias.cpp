#include<cstdint>
#include <iostream>
#include<type_traits>
using namespace std;

constexpr bool Use64BitInt {true};

using Integer = conditional_t<Use64BitInt, int32_t, int64_t>;
int main(){

cout<<"Size of integer in bytes: " << sizeof(Integer)<<endl;


}

