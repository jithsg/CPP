#include<iostream>
#include<concepts>

using namespace std;

template<typename T>
// concept Sized = requires {T::Size;};
concept Sized = requires(T t) {t.Size;};

struct Rock{
    int Size;
};

int main(){
    if (Sized<Rock>) {
        cout << "Rock is sized" << endl;
    }
    return 0;
}