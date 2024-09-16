#include<iostream>
#include<ranges>
#include<vector>
#include<algorithm>


class Player{
    private:
    int mHealth;

    public:
    bool isDead()const{
        return mHealth<=0;
    }
};

int main(){
    std::vector<int> numbers = {4, 1, 3, 2, 5};

    bool (Player::*isDeadPtr)() const = &Player::isDead;

    Player player;

   bool result = (player.*isDeadPtr)();

   std::cout<<result<<std::endl;    

   return 0;

    // auto View {std::views::take(numbers,3)};

    // for (const auto& number:View){
    //     std::cout<<number<<std::endl;
    // }

    // for (const auto& number:std::views::reverse(numbers)){
    //     std::cout<<number<<std::endl;
    // }

    // std::ranges::sort(std::views::take(numbers,3));

    // for (const auto& number:numbers){
    //     std::cout<<number<<std::endl;
    // }
    // auto filtered = std::views::filter(numbers, [](int x){return x%2==0;});

    // for (const auto& number:filtered){
    //     std::cout<<number<<std::endl;
    // }

}