#include<iostream>
#include<memory>
using namespace std;


class Character{
    public:
        string mName;
        int mHealth;

        Character(string name, int health): mName(name), mHealth(health){
            cout<<"Creating "<<mName<<endl;
        }
        ~Character(){
            cout<<"Destroying "<<mName<<endl;
        }

        void display() const{
            cout<<"Name: "<<mName<<", Health: "<<mHealth<<endl;
        }

};



void display_name(unique_ptr<Character> object){
    cout<<object->mName<<endl;
}

void display_health(Character* object){
    cout<<object->mHealth<<endl;
}

int main(){

    unique_ptr<Character> ptr1 {make_unique<Character>("Player1", 100)};
    cout<<"Logging "<<ptr1->mName<<endl;
    display_name(move(ptr1));
    unique_ptr<Character> ptr2 {make_unique<Character>("Player2", 100)};
    cout<<"Logging "<<ptr2->mName<<endl;
    display_name(move(ptr2));
    

    // ptr1->display();

    // auto ptr2 {make_unique<Character>("Player2", 99)};

    // ptr2->display();

    // display_name(ptr1.get());
    // display_health(ptr1.get());


    return 0;
}