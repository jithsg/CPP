#include<iostream>
#include<vector>
#include<ranges>
#include<algorithm>


// int main(){
//     std::vector R {1, 2, 3, 4, 5};

//     auto sentinel {R.end()};

//     // for (auto it {R.begin()}; it != sentinel; ++it){
//     //     std::cout<<*it<<std::endl;
//     // }

//     std::ranges::for_each(R.begin(), R.end(), [](auto& element){
//         std::cout<<element+1<<std::endl;
//     });


// }

struct Sentinel{
    public:
    bool operator==(auto it)const{
        return *it<0;
    }


};

int main(){
    std::vector R {1, 2, 3, -4, 5};

    Sentinel s;

    for (auto it {R.begin()}; it != s; ++it){
        std::cout<<*it<<std::endl;
    }

    };