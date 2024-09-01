#include <array>
#include <iostream>
#include <string>
using namespace std;
// int main() {
//   std::array Nums{1, 2, 3};
//   auto Start{Nums.begin()};
//   cout << "First element: " << *Start << endl;
// }

class Character {
    public:
        string GetName() {
            return "Anna" ;
        }   

};

int main() {
    array<Character, 3> Characters;

    auto Start{Characters.begin()}; 
    cout<<Start->GetName()<<endl;
}