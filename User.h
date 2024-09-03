#pragma once
#include<string>
using namespace std;

struct User{
    public:
        string mEmail;
        User(string email):mEmail(email){}
        bool operator==(const User &other) const{
        return mEmail == other.mEmail;
    }


};

namespace std{
    template<>
    struct hash<User>{
        size_t operator()(const User& user) const{
            return hash<string>{}(user.mEmail);
        }
    };
}