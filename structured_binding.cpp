#include <iostream>
#include <utility>
using namespace std;    

struct vector3{
    int x;
    int y;
    int z;
};

int main() {

    // vector3 v1{1,2,3};
    // auto [x,y,z] = v1;
    // cout<<x<<endl;
    // cout<<y<<endl;
    // cout<<z<<endl;
    pair<int, int> p1{1,2};
  

    // ++p1.first;
    // auto [x,y] = p1;
    // cout<<x<<endl;
    int x = 10;
    int y = 20;

    pair<int&, int*> p2{x,&y};
    cout<<p2.first<<endl;
    cout<<*(p2.second)<<endl;

}