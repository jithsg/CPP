#include<iostream>
using namespace std;

int GetNumber(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    return a;

}

constexpr int Add(int a, int b){
    return a + b;
}

int main(){
    cout << "The sum is: " << Add(GetNumber(), GetNumber()) << endl;
};
