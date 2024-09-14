#include<iostream>
#include<vector>
#include<algorithm>




int main(){
    std::vector<int> numbers = {-5,3,2,4,1};
    std::ranges::sort(numbers, {}, [](int x){return abs(x);});
    for (const auto& number:numbers){
        std::cout<<number<<" ";
    }
}