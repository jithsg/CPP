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

template <typename T, int Quantity>
class Renderable{
    public:
    T object;
    void Render(){
        cout << Quantity<< object.Description << endl;
    }

};


template <typename T>
class Renderable<T, 1>{
    public:
    T object;
    void Render(){
        cout << "A single" << object.Description<< endl;
    }

};



int main(){
    Renderable<Tree, 1> A{Tree()};

    A.Render();
    Renderable<Tree, 10> B{Tree()};

    B.Render();

}