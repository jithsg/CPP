#include<iostream>

class Player{
    public:
    std::string mName;

};

class Party{
    public:
    Party(Player a, Player b, Player c):A(a), B(b), C(c){}


    
    Player A;
    Player B;
    Player C;

    struct Iterator{
        Party* party;
        size_t idx;
        Iterator(Party* ptr, size_t idx):party(ptr), idx(idx){}
    };
        Iterator begin(){
            return Iterator(this, 0);}
        Iterator end(){
                return Iterator(this, 3);
            }
        

};

int main(){
   Party MyParty{Player{"John"}, Player{"Bob"}, Player{"Alice"}};

   for (auto& member:MyParty){
    std::cout<<member.mName<<std::endl;
   }
}

