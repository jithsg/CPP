#include<unordered_map>
#include<iostream>


int main(){
    using std:: unordered_map, std:: string, std::cout, std::endl;
    unordered_map<string, string> Map{
        {"Anna", "Developer"},
        {"Bob", "Manager"},
        {"Charlie", "Analyst"}
    };
    Map.emplace("David", "Developer");
    Map.emplace("Eve", "Analyst");
    Map.emplace("Frank", "Manager");
    Map.emplace("Grace", "Analyst");

    std::pair<string, string> Hugh{"Hugh", "Analyst"};
    Map.insert(Hugh);
    Map["Ivy"] = "Developer";

    // cout<<"Size: "<<Map.size()<<endl;


    // for (const auto& item: Map){
    //     std::cout<<item.first<<": "<<item.second<<std::endl;
    // }
    
    enum class Slot {Weapon, Armor, Helmet};
    struct Item {string Name;};

    unordered_map<Slot, Item> Inventory{
        {Slot::Weapon, {"Sword"}},
        {Slot::Armor, {"Chainmail"}},
        {Slot::Helmet, {"Helmet of Brilliance"}}
    };
    

    for (const auto& [key,val]: Inventory){
        cout <<static_cast<int>(key)<<": "<<val.Name<<endl;
    }



}
