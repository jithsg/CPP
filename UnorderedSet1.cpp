#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

void log(int x){
    cout<<x<<endl;
}

int main(){
    unordered_set<int> myset {1, 2, 3, 4};
    // for (auto num: myset){
    //     cout<<num<<endl;
    // }
    int x = 6;
    myset.emplace(5);
    myset.insert(x);
    myset.erase(x);
    auto [it, isTrue] {myset.insert(6)};
    cout<<"Inserted 6: "<< (isTrue? "Yes" : "No") <<endl;
    for_each(myset.begin(), myset.end(), log);
    cout<<"Size of myset: "<<myset.size()<<endl;
    if (myset.contains(5)){
        cout<<"5 is in myset"<<endl;
    }
    auto A {myset.find(5)};
    if (A!= myset.end()){
        cout<<"5 is in myset"<<endl;
    }
    else{
        cout<<"5 is not in myset"<<endl;
    }

} 