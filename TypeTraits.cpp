#include <type_traits>
#include <iostream>

using namespace std;
class Actor {};
class Monster : public Actor {};    

template <typename T>
void Check(T param){
    if (is_pointer_v<T>){
        cout << "Pointer" << endl;
    }
    else if (is_same_v<T, Actor>){
        cout << "Actor" << endl;
    }
    else if (is_base_of_v<Actor, T>){
        cout << "Derived from Actor" << endl;
    }
    else{
        cout << "Unknown" << endl;
    }
}

int main(){
    Actor actor;
    Monster monster;
    Actor* actor_ptr = &actor;
    Monster* monster_ptr = &monster;
    Check(actor);
    Check(actor_ptr);
    Check(monster);
    Check(monster_ptr);
    return 0;
}