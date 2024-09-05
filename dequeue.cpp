#include<iostream>

#include<deque>


int main(){
using std::cout, std::endl;

std::deque<int> dq{1,2,3,4,5}; 

for (auto i : dq){
    cout<<i<<endl;


}
}