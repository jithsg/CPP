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


class Renderer{
public:
template <typename T>
void Render(T object){
    cout << object.Description << endl;
}

};

template <>
void  Renderer:: Render<Monster>(Monster object){
    cout << object.Name << endl;
}

int main(){
Renderer A;
A.Render(Tree());
A.Render(Rock());
A.Render(Monster());


    return 0;
}