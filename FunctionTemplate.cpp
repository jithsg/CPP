#include<iostream>
using namespace std;

template <typename T>
T Add(T a, T b){
    return a + b;
}


int main(){
    cout << Add<int>(1, 2) << endl;
    cout << Add<double>(1.1, 2.2) << endl;
    cout << Add<float>(1.1f, 3.2f) << endl;
    return 0;
}