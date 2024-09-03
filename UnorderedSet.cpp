#include "User.h"
#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<User> Users;
    Users.emplace("user@example.com");

    User NewUser("user@example.com");

    if (Users.contains(NewUser)){
        cout<<"User found in set"<<endl;
    }

}