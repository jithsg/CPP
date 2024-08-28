#include<iostream>  

#include<concepts>


using namespace std;

template<typename T>
concept Renderable = requires(T t) {
    {t.Render()};
};

struct Rock{
    void Render() {
        cout << "Rendering Rock" << endl;
    }
};


int main(){
    if (Renderable<Rock>) {
        cout << "Rock is renderable" << endl;
    }
    return 0;
}