#include<iostream>
#include<vector>
#include<ranges>
#include<algorithm>


int main(){
    std::vector R {1, 2, 3, 4, 5};

    auto sentinel {R.end()};

    // for (auto it {R.begin()}; it != sentinel; ++it){
    //     std::cout<<*it<<std::endl;
    // }

    std::ranges::for_each(R, [](auto& element){
        std::cout<<element+1<<std::endl;
    });


}