#include <iostream>

struct Player{
    public:
    std::string name;
    int score;

    Player(std::string name, int score){
        this->name = name;
        this->score = score;
    }

    void disp(){
        std::cout<<name<<std::endl;
        std::cout<<score<<std::endl;
    }
    void display(){
        std::cout<<this->name<<std::endl;
        std::cout<<this->score<<std::endl;
    }

    void displayed(){
        std::cout<<(*this).name<<std::endl;
        std::cout<<(*this).score<<std::endl;
    }

    Player* increaseScore(int value){
        this->score+=value;
        return this;
    }

};

int main(){ 
    Player p1("A", 10);

    // std::cout<<p1.mName<<std::endl;
    // std::cout<<p1.mScore<<std::endl;
    p1.disp();
    // p1.display();
    // p1.displayed();
    p1.increaseScore(5)->increaseScore(10);
    p1.disp();

}