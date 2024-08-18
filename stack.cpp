#include<iostream>
#include<string>
using namespace std;

class Character{
    public:
    string mName {"Frodo"};

    ~Character(){
        cout << "Character Destructor" << endl;
    }

};

int main(){
    Character* ptr {new Character{"Frodo"}};
    cout << ptr->mName << endl;

    int* ptr2 {new int{5}};
    cout << *ptr2 << endl;

    cout <<new int{6}<<endl;

    int* ptr3 {new int{7+9}};
    cout << *ptr3 << endl;
    
}