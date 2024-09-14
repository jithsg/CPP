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

// int main(){
//     std::forward_list<int>numbers = {5,3,2,4,1};
//     numbers.sort();
//     for (auto& number:numbers){
//         std::cout<<number<<" ";
//     }
// }

struct SomeType{

    int mX;

    SomeType(int x):mX(x){}

    auto operator<=>(const SomeType& other)const{
        return mX <=> other.mX;
    }
    bool operator== (const SomeType& other)const{
        return mX == other.mX;}
};
int main(){

    std::vector<SomeType> number{0, 2, 1, 3};

    std::ranges::sort(number);
    for (auto& number:number){
        std::cout<<number.mX<<" ";
    }
    
}
