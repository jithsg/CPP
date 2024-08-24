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
void Render(T object){
    cout << object.Description << endl;
}


template <>
void Render<Monster>(Monster object){
    cout << object.Name << endl;
}

int main(){
    Tree tree;
    Rock rock;
    Monster monster;

    Render<Tree>(tree);
    Render<Rock>(rock);
    Render<Monster>(monster);


    return 0;
}