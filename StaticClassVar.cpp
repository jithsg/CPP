#include<iostream>
#include <string>

// class Vampire{
//     public:
//         int mHealth;
//          static inline std::string Faction{"Undead"};
// };

// int main(){
//     Vampire vampire1{100};
//     std::cout<<"Vampire 1's health: "<<vampire1.mHealth<<std::endl;
//     Vampire vampire2;
//     vampire2.mHealth=200;
//     std::cout<<"Vampire 2's health: "<<vampire2.mHealth<<std::endl;

//     std::cout<<"Vampire 1's faction: "<<vampire1.Faction<<std::endl;
//     std::cout<<"Vampire 2's faction: "<<vampire2.Faction<<std::endl;
//     // Vampire::Faction="dead";
//     // std::cout<<"Vampire 1's faction: "<<vampire1.Faction<<std::endl;
//     // std::cout<<"Vampire 2's faction: "<<vampire2.Faction<<std::endl;
//     // if (&vampire1.Faction==&vampire2.Faction){
//     //     std::cout<<"Both vampires are from the same faction"<<std::endl;
//     // }
//     // vampire1.Faction="living";
//     // std::cout<<"Vampire 1's faction: "<<vampire1.Faction<<std::endl;
//     // std::cout<<"Vampire 2's faction: "<<vampire2.Faction<<std::endl;
//     std::cout<<"All vampires are now: "<<Vampire::Faction<<std::endl;
//     Vampire::Faction="living";
//     std::cout<<"All vampires are now: "<<Vampire::Faction<<std::endl;


// }


class Vampire {
public:
  static std::string GetFaction(){
    return Faction;
  }

private:
  static inline std::string Faction{"Undead"};
};

int main(){
  std::cout << "Vampire faction: " << Vampire::GetFaction() << std::endl;

  return 0;
}