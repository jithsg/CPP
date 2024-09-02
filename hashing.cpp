#include<iostream>  
#include<vector>
using namespace std;


size_t hashing(int Num){
    return Num % 10;
}

void insert(vector<int> &Array, int num){
    Array[hashing(num)] = num;
}

bool contains(vector<int> &Array, int num){
    if (Array[hashing(num)] == num){
        cout << "Array contains " << num << endl;
    
    return true;
    }
    else{
        cout << "Array does not contain " << num << endl;
    
    return false;
    }
}

int main(){
    vector<int> Array;
    Array.resize(10);
    insert(Array, 150);

    // for (auto num: Array){
    //     cout<<num<<endl;
    // }
    contains(Array, 150);
    for (auto& num: Array){
        cout<<num<<endl;
    }
    return 0;

}