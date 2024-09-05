#include<iostream>
#include<any>

struct Vec3{
    int x;
    int y;
    int z;
};


int main(){
    std::any a {10};
    a.emplace<Vec3>(1.f,2.f,3.f);
    // int x {any_cast<int>(a)};
    // int y {std::any_cast<int>(a)};
    // std::cout<<y<<std::endl;
    if (a.type() == typeid(Vec3)){
        Vec3 vec {std::any_cast<Vec3>(a)};
        std::cout<<vec.x<<std::endl;
        std::cout<<vec.y<<std::endl;
        std::cout<<vec.z<<std::endl;
    }
    else{
        std::cout<<"Not Vec3"<<std::endl;
    }
    // std::cout<<a.has_value()<<std::endl;
}