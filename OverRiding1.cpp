#include <iostream>
using namespace std;


class Animal{
    public:
        virtual void eat(){
            cout << "Animal is eating" << endl;
        }
};

class Dog: public Animal{
    public:
        void eat() override {
            cout << "Dog is eating" << endl;
        }
};

int main(){
  Animal* animal_ptr;
    Dog dog;
    animal_ptr = &dog;
    animal_ptr->eat();

    
}