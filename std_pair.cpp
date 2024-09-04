#include <iostream>
#include<utility>
#include<array>

namespace Engine {
    struct Character{};
}

namespace Social {
    struct Guild{};
}


template<typename T>
void GetFirst(T Container){
    // std::cout<<Container.first<<std::endl;
    // std::cout<<Container.second<<std::endl;
    std::cout<<std::get<0>(Container)<<std::endl;

}

using GuildMember= std::pair<Engine::Character, Social::Guild>;
int main(){
    std::pair<bool, int> myPair(true, 10);

    std::array<int, 5> myArray{1,2,3,4,5};
    GetFirst(myPair);
    GetFirst(myArray);
    // GuildMember MyPair;

    // std::cout<<myPair.first<<std::endl;
    // std::cout<<myPair.second<<std::endl;

    // std::cout<<std::get<bool>(myPair)<<std::endl;
    // std:: cout<<std::get<int>(myPair)<<std::endl;


}