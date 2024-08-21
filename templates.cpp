#include<utility>
#include<iostream>
using namespace std;


struct Player{
    string Name {"Anna"};
};

int main(){

pair<Player, float> MyPair{Player{"Joe"}, 3.14f};

cout << "First: " << MyPair.first.Name << endl;
cout << "Second: " << MyPair.second << endl;
}


