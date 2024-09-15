#include<iostream>
#include<ranges>
#include<vector>

int main(){
    std::vector<int> numbers = {1,2,3,4,5};

    auto View {std::views::take(numbers,3)};

    for (const auto& number:View){
        std::cout<<number<<" ";
    }

}