#include <iostream>

struct Player{
    public:
    std::string mName;
    int mScore;

    Player(std::string name, int score):mName(name), mScore(score){}

    void disp(){
        std::cout<<mName<<std::endl;
        std::cout<<mScore<<std::endl;
    }
    void display(){
        std::cout<<this->mName<<std::endl;
        std::cout<<this->mScore<<std::endl;
    }

    void displayed(){
        std::cout<<(*this).mName<<std::endl;
        std::cout<<(*this).mScore<<std::endl;
    }
};

int main(){ 
    Player p1("A", 10);

    // std::cout<<p1.mName<<std::endl;
    // std::cout<<p1.mScore<<std::endl;
    p1.disp();
    p1.display();
    p1.displayed();
}