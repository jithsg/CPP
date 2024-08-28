#include<iostream>

#include<concepts>
using namespace std;


template<typename T>
concept Renderable = requires (T t) {
    t.Render(1, 3);
};

struct Rock{
    void Render(int x, int y) {
    }
};

int main(){
    if (Renderable<Rock>) {
        cout << "Rock is renderable" << endl;
    }
    return 0;
}