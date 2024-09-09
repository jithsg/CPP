#include <iostream>


template<int health>
class Player{
    public:
    std::string name;
    int mhealth {health};
};

template<int age>
void Character(){
    if (age>18){
        std::cout<<"Adult"<<std::endl;
    }
    else{
        std::cout<<"Child"<<std::endl;
    }

}
int main(){
    Player<100> player1;
    player1.name="Player1";
    std::cout<<player1.name<<std::endl;
    std::cout<<player1.mhealth<<std::endl;
    Character<18>();
    Character<20>();
   
}