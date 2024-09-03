#include<iostream>
using namespace std;


namespace Geometry{
    float add(float a, float b){
        return a+b;
    }

    float Pi {3.14};

    class Square{
        float length {5};
        float area(){
            return length*length;
        }

    };
}

int main(){
   cout<< Geometry::add(10,20)<<endl;
}