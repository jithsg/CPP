#include <iostream>
#include<algorithm>
#include<vector>


int main(){
    std::vector<int> v={1,2,3,4,5};

    // std::ranges::for_each(v, [](int i){std::cout<<i<<" ";});

    std::ranges::for_each(v, [](int i){std::cout<<i+1<<" ";});

}