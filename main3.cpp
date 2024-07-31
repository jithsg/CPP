#include <iostream>
using namespace std;

class Animal{
  protected:
    const char* mName;

  public:
    Animal(const char* name): mName(name){
      cout << "Animal constructor called" << mName << endl;
    }
    virtual ~Animal(){
      cout << "Animal destructor called" << mName << endl;
    }
    virtual void  makeSound() const {
      cout << "Animal sound" << endl;
    }
};

class Dog: public Animal{
  public:
    Dog(const char* name): Animal(name){
      cout << "Dog constructor called" << mName << endl;
    }
    ~Dog() override {
      cout << "Dog destructor called" << mName << endl;
    }
    virtual void makeSound() const override {
      cout << "Dog sound" << endl;
    }

};

int main(){
  Dog dog("Buddy");
  dog.makeSound();
  return 0;
}