#include<iostream>
#include<string>
using namespace std;


struct Tree{
    string Description {"Tree"};

};

struct Rock{
    string Description {"Rock"};
};

struct Monster{
    string Name {"Monster"};
};

template <typename T>
class Renderable{
    public:
    T object;
    void Render();
};

template <typename T>
void Renderable<T>::Render(){
        cout << object.Description << endl;
    }

template<>
void Renderable<Monster>::Render(){
    cout << object.Name << endl;

}


int main(){
    Renderable<Tree> A{Tree()}; 
    A.Render();
    Renderable<Rock> B{Rock()};
    B.Render();
    Renderable<Monster> C{Monster()};
    C.Render();

}