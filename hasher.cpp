#include<iostream>
#include<string>
using namespace std;


int main(){
    auto IntHasher {hash<int>{}};
    auto StringHasher {hash<string>{}};

    cout<<"10 : "<<IntHasher(10)<<endl;
    cout<<"Hello : "<<StringHasher("Hello")<<endl;
}