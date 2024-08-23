#include <iostream> 
#include <string>
using namespace std;

class Monster{
    public:
        string mName;
    };
    

class Player{
    public:
        string mName;
    template <typename T>
    void AttackDisplay(T other){
        cout << mName << " Attacking " << other.mName << endl;
    }

};

int main(){
    Player p1{"Player1"};
    Player p2{"Player2"};
    p1.AttackDisplay<Player>(p2);
    
    Monster m1{"Monster1"};

    p1.AttackDisplay<Monster>(m1);
    p1.AttackDisplay(m1);

}