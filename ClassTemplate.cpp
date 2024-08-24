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
    void Render(T object){
        cout << object.Description << endl;
    }
    T object;
};
template<>
class Renderable<Monster>{
    public:
    void Render(Monster object){
        cout << object.Name << endl;
    }
    Monster object;
};

int main(){
    Renderable<Tree> A;
    A.Render(Tree());
    Renderable<Rock> B;
    B.Render(Rock());
    Renderable<Monster> C;
    C.Render(Monster());
}