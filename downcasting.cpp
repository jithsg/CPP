#include <iostream>
#include <string>
using namespace std;    


class Monster {
    private:
        string mName;
    public:
        Monster(string name) : mName(name) {}
        string GetName() { return mName; }
    virtual ~Monster() {}

};

class Goblin : public Monster {
    public:
        Goblin(string name):  Monster(name) {}
        void Enrage() {
            cout << "Goblin is enraged" << endl;
            damage += 5;
        }
        
    private:
        int damage {10};
};


void Act(Monster* enemy){
//    cout<< enemy->GetName() << " acting!" << endl;
//    cout<< enemy->Enrage() << endl;
Goblin* goblinptr {dynamic_cast<Goblin*>(enemy)};
if (goblinptr) {
    goblinptr->Enrage();
}
else {
    cout << "Not a goblin" << endl;

}
}

int main() {
    Goblin goblin("Bonkers");
    Act(&goblin);

    return 0;
}
