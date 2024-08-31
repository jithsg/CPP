#include<iostream>
#include<stdexcept>
#include<string>
using namespace std;


int PowerUp(int power){
    if (power < 0){
        throw invalid_argument("Power cannot be negative");
    }
        return power;
    

}


class Enemy{
    public:
    int Power;
    Enemy(int power) try 
    : Power{PowerUp(power)}{

    } catch(invalid_argument &e){
        cout<<e.what()<<endl;
    }

};


int main(){
try{
        Enemy e1{-1};
}
        catch(invalid_argument &e){
            cout<<e.what()<<endl;
        }
   
}