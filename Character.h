#pragma once
#include<string>
class Character {
    public:
        std:: string mName;
        Character(std:: string name):mName(name){}
        bool operator==(const Character& other) const{
            return mName == other.mName;
        }
};

namespace std{
    template<>
    struct hash<Character>{
        size_t operator()(const Character& character) const{
            return hash<string>{}(character.mName);
        }
    };

}