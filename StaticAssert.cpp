#include<iostream>

using namespace std;


template <typename T>
T add (T a, T b){
    static_assert(is_integral_v<T>, "T must be an integral type");
    return a + b;
}


int main(){
    cout << add("hello", "world") << endl;
}