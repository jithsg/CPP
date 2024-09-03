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


struct hasher{
        size_t operator()(const Character& character) const{
            return std:: hash<std:: string>{}(character.mName);
        }
};
