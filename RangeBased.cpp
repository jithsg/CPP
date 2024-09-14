#include <iostream>
#include <vector>
#include <algorithm>

// int main(){
//     std::vector<int> numbers = {5,2,3,4,1};

//     std::ranges::sort(numbers.begin(),numbers.end());

//     for (const auto& number:numbers){
//         std::cout<<number<<" ";
//     }



// }

int main(){
    std::vector<int> numbers = {5,3,2,4,1};
    std::sort(std::next(numbers.begin(), 1),std::prev(numbers.end(), 1)); 

    for (auto& number:numbers){
        std::cout<<number<<" ";
    }
}