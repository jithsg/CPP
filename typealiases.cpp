#include<utility>
#include<iostream>
using namespace std;

struct Player{
    string Name;
};


struct Guild{
    string Name;
};
using GuildMember = pair<const Player&, const Guild&> ;
void LogDetails(GuildMember& Member){
    cout << "Player: " << Member.first.Name << endl;
    cout << "Guild: " << Member.second.Name << endl;
}


int main(){

    // pair<int, float> MyPair{1, 3.14f};

    // cout << "First: " << MyPair.first << endl;
    // cout << "Second: " << MyPair.second << endl;

    Player Anna{"Anna"};
    Guild Fellowship{"The Fellowship"};

    GuildMember Member{Anna, Fellowship};

    LogDetails(Member);


}
