#include <iostream>
#include <vector>
#include <algorithm>
#include<forward_list>

// int main(){
//     std::vector<int> numbers = {5,2,3,4,1};

//     std::ranges::sort(numbers.begin(),numbers.end());

//     for (const auto& number:numbers){
//         std::cout<<number<<" ";
//     }



// }

// int main(){
//     std::vector<int> numbers = {5,3,2,4,1};
//     std::ranges::sort(std::next(numbers.begin(), 1),std::prev(numbers.end(), 1)); 

//     for (auto& number:numbers){
//         std::cout<<number<<" ";
//     }
// }

int main(){
    std::forward_list<int>numbers = {5,3,2,4,1};
    numbers.sort();
    for (auto& number:numbers){
        std::cout<<number<<" ";
    }
}