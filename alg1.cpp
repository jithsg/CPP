#include <iostream>
#include<algorithm>
#include<vector>
#include<ranges>

// int proj_add(int& i){
//     return i+=1;
// }

// int disp(int i){
//     return i;
// }

// class Character{
//     public:
//     std::string mName;
//     Character(std::string name):mName(name){}
// };

// std::string disp(Character& ch){
//     return ch.mName;
// }

// void log(std::string s){
//     std::cout<<s<<std::endl;
// }
// int main(){
// std::vector<Character> characters {Character("A"), Character("B"), Character("C")};


//     std::ranges::for_each(characters, log, disp);
//     return 0;

// }

void log(int x){
    std::cout<<x<<std::endl;
}

int main(){
    std::vector<int> v {1,2,3,4,5}; 

    std::ranges::for_each(std::views::reverse(v), log);
}