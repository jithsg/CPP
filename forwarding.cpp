#include<iostream>



class Character{
    public:
    Character(){};

    Character(const Character& other){
        std::cout<<"Copy constructor called"<<std::endl;
    }
    
    Character(Character&& other){
        std::cout<<"Move constructor called"<<std::endl;
    }

};

template<typename T>
T Build(T&& Original){
    return T{Original};
}




int main(){
    Character A;
    Character B{Build(A)};
    Character C{Build(std::move(A))};
    return 0;
}
