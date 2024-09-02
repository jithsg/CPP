#include <array>
#include <iostream>
#include <string>
#include <forward_list>
#include <list>
#include <vector>
using namespace std;
// int main() {
//   std::array Nums{1, 2, 3};
//   auto Start{Nums.begin()};
//   cout << "First element: " << *Start << endl;
// }

// class Character {
//     public:
//         string GetName() {
//             return "Anna" ;
//         }   

// };

// int main() {
//     array<Character, 3> Characters;

//     auto Start{Characters.begin()}; 
//     cout<<Start->GetName()<<endl;
// }

// int main(){
//     forward_list<int> Nums{1,2,3,4,5};
//     auto Start {Nums.begin()};
//     auto Second {++Nums.begin()};
//     cout<<"First: "<<*Start<<endl;
//     cout<<"Second: "<< *Second<<endl;

// }

// int main(){
//     list<int> Nums{1,2,3,4,5};
//     auto iterator {Nums.begin()};
//     cout<<"start: "<<*iterator<<endl;
//     cout<<"start + 1: "<<*(++iterator)<<endl;
//     cout<<"start + 2: "<<*(++iterator)<<endl;
//     cout<<"start + 2 -1: "<<*(--iterator)<<endl;
// }

// int main(){
//     vector <int> Nums{1,2,3,4,5};
//     auto begin{Nums.begin()};
//     auto end{Nums.end()};

//     // cout<<"First: "<<*begin<<endl;
//     // // cout<<"Last: "<<*(end-1)<<endl;
//     // // cout<<"Second: "<<*(begin+1)<<endl;
//     // cout<<"First: "<<*(next(begin+1, -1))<<endl;

//     for(auto iterator{begin}; iterator != end; iterator++){
//         cout<<*iterator<<endl;
//     }
// }

// int main(){
//     vector<int> Nums{1,2,3,4,5};

//     for (auto& num: Nums){
//         cout<<num<<endl;
//     }
// }

// class Character{
//     public:
//         string Name {"Anna"};
//         void GetName(){
//             cout<<Name<<endl;
//         }
// };
// int main(){

//     array<Character, 5> Characters;

//     for(auto& character: Characters){
//         character.GetName();

//     }
//     return 0;


// int main() {
//   std::vector<int>Nums{1, 2, 3, 4, 5};
//   auto Distance {distance(Nums.begin(), Nums.end())};
//   std::cout << "Distance: " << Distance;
// }

#include <algorithm>

// void increment(int& num){

//     num++;
// }
// void log(int num){
//     cout<<num<<endl;
    
// }

// int main(){
//     vector<int> Nums{1,2,3,4,5};

//     for_each(Nums.begin(), Nums.end(), increment);

//     for_each(Nums.cbegin(), Nums.cend(), log);
//     return 0;   


// }

// int main(){
//     forward_list<int> Nums{1,2,3,4,5};
//     auto Start{Nums.begin()};
//     auto End{Nums.end()};
//     auto Distance{distance(Start, End)};
//     cout<<"Distance: "<<Distance<<endl;
//     cout<<"First: "<<*Start<<endl;
//     // cout<<"Last: "<<*(next(End, -2))<<endl;
//     for (auto iterator{Start}; iterator != End; iterator++){
//         cout<<*iterator<<endl;
//     }

//     cout<<"First: "<<*Start<<endl;
// }

class Character{
    public:
        string Name;
};
int main(){
    forward_list<Character> Characters;
    Character Wizrad{"Gandalf"};
    Characters.push_front(Wizrad);
    // cout<<Characters.front().Name<<endl;
    Characters.emplace_front("Elf");
    cout<<Characters.front().Name<<endl;
    Characters.pop_front();

    Characters.emplace_after(Characters.begin(), "Orc");
    for (auto& character: Characters){
        cout<<character.Name<<endl;
    }

}