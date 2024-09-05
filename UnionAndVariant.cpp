#include <iostream>
#include <variant>

// union NumberUnion{
//     int i;
//     float f;
// };

// struct sample{
//     sample()=delete;
// };



class Character{
    public:
    std::string Name;
    Character(std::string name):Name(name){}
};

void log(Character* character){
    if (character){
        std::cout<<character->Name<<std::endl;
    }
    else{
        std::cout<<"Character is null"<<std::endl;
    }
}



int main(){
using std::cout, std::endl, std::string;

std::variant<Character, int> num(Character("Anna"));

num.emplace<0>("Annie");

cout<<std::get<Character>(num).Name<<endl;

log(std::get_if<Character>(&num));
// num=3;
// num=3.3f;
// num="hello";
// cout<<std::get<string>(num)<<endl;
// num = 3;
// cout<<std::get<sample>(num)<<endl;
// num = 3.14f;
// cout<<get<float>(num)<<endl;  

// num="Hello";
// cout<<get<string>(num)<<endl;



}