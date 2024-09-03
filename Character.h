#pragma once
#include<string>
class Character {
    public:
        std:: string mName;
        Character(std:: string name):mName(name){}
};

struct comparer{
            bool operator()(const Character& A, const Character& B) const{
            return A.mName == B.mName;
        }
};
struct hasher{
        size_t operator()(const Character& character) const{
            return std:: hash<std:: string>{}(character.mName);
        }
};
