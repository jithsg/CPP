#include<iostream>
#include<memory>
using namespace std;

class Character{
    public:
        string mName;
        Character(string name = "Frodo"):mName(name){
            cout<<"Creating "<<mName<<endl;
        }

        ~Character(){
            cout<<"Destroying"<<mName<<endl;
        }

};


int main(){
    // auto FrodoPointer {make_shared<Character>()};

    // shared_ptr<Character> GandalfPointer = move(FrodoPointer);

    // cout <<FrodoPointer->mName<<endl;
    // cout <<(*FrodoPointer).mName<<endl;
    // cout <<GandalfPointer.get()<<endl;
    // cout <<FrodoPointer.get()->mName<<endl;
    // cout <<(*FrodoPointer.get()).mName<<endl;

    auto One{make_shared<int>(10)};
    int Two {2};
    shared_ptr<int> Alias {One, &Two};
    cout<<*Alias<<endl;

}