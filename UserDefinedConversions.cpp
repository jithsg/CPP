#include <iostream>

struct Vec3{

    operator bool() const{return x && y && z;}

    int x,y,z;
};

int main(){
    // int IntA{5};
    // if (IntA){
    //     std::cout<<"IntA is true"<<std::endl;
    // }
    // int IntB{0};
    // if (!IntB){
    //     std::cout<<"IntB is true"<<std::endl;
    // }

    Vec3 v{1,2,3};

    if (v){
        std::cout<<"v is truthy"<<std::endl;
    }

    Vec3 v2{1,0,0};
    if (!v2){
        std::cout<<"v2 is false"<<std::endl;
    }
}