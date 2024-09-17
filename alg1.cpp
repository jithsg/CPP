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

// void log(int x){
//     std::cout<<x<<std::endl;
// }

// int main(){
//     std::vector<int> v {1,2,3,4,5}; 

//     std::ranges::for_each(std::views::reverse(v), log);
// }

#include <iostream>
#include <vector>
#include <ranges>

// int main() {
//     std::vector<int> numbers{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     // Create a view that filters even numbers
//     auto even_numbers = numbers | std::views::filter([](int x) { return x % 2 == 0; });

//     std::cout << "Even Numbers: ";
//     for (int num : even_numbers) {
//         std::cout << num << ' ';
//     }
//     std::cout << '\n';
//     std::cout<<typeid(even_numbers).name()<<std::endl;
//     return 0;
// }

void log(int x){
    std::cout<<x<<std::endl;
}

int main(){
    std::vector<int> v {1,2,3,4,5,6,7};

    // std::ranges::for_each(v|std::views::filter([](int x){return x%2==0;})|std::views::transform([](int x){return x*2;}), log);
    std::ranges::for_each(v.begin(), v.end(), log);

    
}