#include <iostream>

struct Vec3{

    Vec3(int x, int y, int z):x(x), y(y), z(z){}

    void log(){
        std::cout<<"x: "<<x<<std::endl;
        std::cout<<"y: "<<y<<std::endl;
        std::cout<<"z: "<<z<<std::endl;
    }

    int x {0};
    int y {0};
    int z {0};

};

int main(){
    Vec3 v {1,2,3};
    v.log();
    return 0;
}