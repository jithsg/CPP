#include<iostream>
#include<ranges>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int> numbers = {4, 1, 3, 2, 5};

    // auto View {std::views::take(numbers,3)};

    // for (const auto& number:View){
    //     std::cout<<number<<std::endl;
    // }

    // for (const auto& number:std::views::reverse(numbers)){
    //     std::cout<<number<<std::endl;
    // }

    std::ranges::sort(std::views::take(numbers,3));

    for (const auto& number:numbers){
        std::cout<<number<<std::endl;
    }

}