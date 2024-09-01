#include<iostream>
#include<vector>


using namespace std;


int main(){
    vector<vector <int>> Grid{

        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout<<Grid[0][0]<<endl;
}