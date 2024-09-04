#include<unordered_map>
#include<iostream>


int main(){
    using std:: unordered_map, std:: string;
    unordered_map<string, string> Map{
        {"Anna", "Developer"},
        {"Bob", "Manager"},
        {"Charlie", "Analyst"}
    };

    for (auto item: Map){
        std::cout<<item.first<<": "<<item.second<<std::endl;
    }
    
}
