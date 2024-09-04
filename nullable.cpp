#include <iostream>
#include <string>
#include <optional>

using std::string, std::optional;

// class character{
//     public:
//      string Name;
//      optional<string> Guild;
//      optional<int> Level;
// };


// int main(){
//     using std::cout, std::endl;
//     character Anna{"Anna", "The Builders Guild", 1};
//     cout<<Anna.Name<<endl;
//     Anna= {"Annie", "The Builders Guild", 1};
//     cout<<Anna.Name<<endl;
//     if (Anna.Guild){
//         cout<<Anna.Guild.value()<<endl;
//         cout<<*(Anna.Guild)<<endl;
//     }
//     else{
//         cout<<"No Guild"<<endl;
//     }
//     if (Anna.Level){
//         cout<<*(Anna.Level)<<endl;
   
//     }
//     else{
//         cout<<"No Level"<<endl;
//     }
  

//     character Bob{"Bob"};

//     cout<<Bob.Name<<endl;
//     if (Bob.Guild){
//         cout<<Bob.Guild.value()<<endl;
//     }
//     else{
//         cout<<"No Guild"<<endl;
//     }
//     return 0;

// }

// class character{
//     public:
//     string Name;
//     optional <int> Level;

//     character(string name, int level): Name{name}, Level{level}{}

// };

// int main(){
//     using std::cout, std::endl;
//     optional<character> Anna;
//     Anna.emplace("Anna", 1);
//     cout<<Anna->Name<<endl;
//     cout<<Anna->Level.value()<<endl;
//     cout<<Anna.Name<<endl;
//     cout<<Anna.Level.value()<<endl;
   
//     return 0;
// }

// #include <iostream>
// #include <optional>

// struct SomeType {
//   int Value;
// };

// int main() {
//   std::optional<SomeType> Optional{42};
//   std::cout << "Value: " << Optional->Value;
// }

// struct Player{
//     string Name;
//     int Level;
// };

// int main(){
//     using std::cout, std::endl;
//     optional<Player> Anna;
//     Anna.emplace("Anna", 1);
//     cout<<Anna->Name<<endl;
//     cout<<Anna->Level<<endl;

//     return 0;
// }

// int main(){
//     using std::cout, std::endl;
//     optional<int> Optional{42};
//     if (Optional==42){
//         cout<<"its 42"<<endl;
//     }
 
//     return 0;
// }

// enum class Faction{
//     Human,
//     Elf
// };

// class Character{
//     public:
//     optional<Faction> faction;
// };


// int main(){
//     using std::cout, std::endl;
//     Character Anna;
//     if (Anna.faction!=Faction::Human){
//         cout<<"Not Human"<<endl;
//     }
//     else{
//         cout<<"Human"<<endl;
//     }

// }

// optional<int> EmptyIntOptional(){
//     return std::nullopt;
// }

// int main(){
//     using std::cout, std::endl;
//     if (EmptyIntOptional()){
//         cout<<"Not Empty"<<endl;
//     }
//     else{
//         cout<<"Empty"<<endl;
//     }
// }