#include "Character.h"
#include <iostream>
#include<unordered_set>
using namespace std;

int main(){

    unordered_set <Character> Characters;
    Characters.insert(Character("A"));
    Characters.emplace("B");

    for (auto& item: Characters){
        cout<<item.mName<<endl;
    }



}