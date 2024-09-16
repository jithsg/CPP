#include <iostream>
#include<vector>
#include<ranges>

int main(){

    std::vector<int> v{1,2,3,4,5,6,7,8,9,10};
    auto v1=std::views::take(v, 5);
    for(auto i:v1){
        std::cout<<i<<" ";
    }
    std::ranges::subrange v2= v;

    for(auto i:v2){
        std::cout<<i<<" ";
    }


}