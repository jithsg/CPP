#include<array>
#include<iostream>
using namespace std;


constexpr int size() {
    return 5;
}

int doubleval(int& num){
    return  num*=2;
}

class character{};


int main(){

array<int, size()> arr{1,2,3,4,5};   

for (int& num: arr){
    cout<<num<<endl;
}
try{
cout<<arr.at(10)<<endl;
}
catch(out_of_range &e){
    cout<<e.what()<<endl;
}
int num{10};
cout<<doubleval(num)<<endl;

array <character, 5> arr1;
for (character& c: arr1){
    cout<<&c<<endl;

}
using Grid = array<array<int, 3>, 3>;
Grid arr2;
arr2= {{{1,2,3},
       {4,5,6}, 
       {7,8,9}}};
for (auto& row: arr2){
    for (int& num: row){
        cout<<num<<endl;
    }
}#
}