#include<iostream>
using namespace std;

// class Adder{
//     private:
//         int mVal;
//     public:
//         Adder(int val):mVal(val){}
//         int operator()(int x){
//             return mVal+x;
//         }
// };


// int main(){
// Adder add5(5);
// cout<<add5(10)<<endl;

// }

class multiplier{
    private:
        int mVal;
    public:
        multiplier(int val):mVal(val){}
        int operator()(int x){
            return mVal*x;
        }
};

int main(){
    multiplier mult5(5);
    cout<<mult5(10)<<endl;
}