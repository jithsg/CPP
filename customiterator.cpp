#include<vector>
#include<utility>
#include<iostream>

class Player{
    private:
    std::string mName;
    public:
    Player(std::string name):mName(name){};
    std::string getName()const{
        return mName;
    }

};

class Party{
    private:
    std::vector<Player> PartyMembers;

    public:
    void addMember(const std::string& NewMember){
        PartyMembers.emplace_back(NewMember);
    };
    // void startQuest(){};
    // void disband(){};
    // void setLeader(){};

    const auto begin(){
        return PartyMembers.begin();
    }
    const auto end(){
        return PartyMembers.end();
    }
};
// static_assert(
//   std::ranges::contiguous_range<Party>);

int main(){
    Party MyParty;
    MyParty.addMember("John");
    MyParty.addMember("Bob");
    MyParty.addMember("Alice");
    

    for (const auto& member:MyParty){
        std::cout<<member.getName()<<std::endl;
    }
}
