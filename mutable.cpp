#include<iostream>

class Character{
    public:
    int getHealth() const{
  
        return mHealth;
        
    }
    int getHealthRequests() const{
        ++mHealthRequests;
        return mHealthRequests;
    }

    private:
    int mHealth {100};
    mutable int mHealthRequests{0}; 

};



int main(){
    Character hero;
    std::cout<<hero.getHealth()<<std::endl;
    std::cout<<hero.getHealthRequests()<<std::endl;
    std::cout<<hero.getHealth()<<std::endl;
    std::cout<<hero.getHealthRequests()<<std::endl;
}

