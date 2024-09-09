#include <iostream>

class Func{
    public: 
    void operator()() const {
        std::cout<<"I am a functor" <<std::endl;
    }

};


int main(){
Func func1;
func1();
Func()();
Func{}();   
}