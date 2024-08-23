#include<iostream>
using namespace std;

enum class Style {Melee, Magic};

class Monster{
    public:
        string mName;
};


template <Style Combatstyle>
class Character{
    public:
        string mName;
        
        template <typename T>
        void Attack (T target){
            if (Combatstyle == Style::Melee){
                cout << "Attacking " << target.mName << " with a sword" << endl;
            }
            else{
                cout << "Attacking " << target.mName << " with a fireball" << endl;
            }


}
};



int main(){
    Monster m1{"Goblin"};
    Monster m2{"Dragon"};

    Character<Style::Melee> c1{"Conan"};
    c1.Attack(m1);

    Character<Style::Magic> c2{"Gandalf"};
    c2.Attack(m2);

    return 0;
}