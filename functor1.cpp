#include <iostream>

class Func{
    public: 
    void operator()() {
        std::cout<<"I am a functor" <<std::endl;
        ++ state;
        std::cout<<"My state is " <<state<<std::endl;


    }
    int operator()(int x, int y) {
        std::cout<<"I am a functor returning a sum" <<std::endl;
        return x+y;
    }
    
    private:
    int state {0};

};

void isEven(int num, Func func){
    if (num % 2 == 0){
        std::cout<<"Even"<<std::endl;
    }
    else{
        std::cout<<"Odd"<<std::endl;
    }
  
}

int main(){
Func func2;
func2();
func2();
func2();
 
}