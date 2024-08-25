#include<iostream>
using namespace std;


class Animal{

    public:
        static int count;
        virtual void eat(){
            cout << "Animal is eating" << endl;
        }
        Animal(){
            count++;
        }
};

int Animal :: count = 0;


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
    cout<< "Number of Animals: " << Animal::count << endl;

    
}