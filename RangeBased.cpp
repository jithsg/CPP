#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> numbers = {5,2,3,4,1};

    std::sort(numbers.begin(),numbers.end());

    for (const auto& number:numbers){
        std::cout<<number<<" ";
    }



}

