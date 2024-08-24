#include<iostream>
using namespace std;

template <typename T>
T Add(T a, T b){
    return a + b;
}

template <typename T1,typename T2=int >
T1 NewAdd(T1 a, T2 b){
    return a + b;
}

template <typename T1, typename T2=T1>
auto NewAdd2(T1 a, T2 b)->decltype(a+b){
    return a + b;
}

int main(){
    cout << Add<int>(1, 2) << endl;
    cout << Add<double>(1.1, 2.2) << endl;
    cout << Add<float>(1.1f, 3.2f) << endl;
    cout << NewAdd<int>(1, 2.2) << endl;
    cout << NewAdd2<int>(5, 5.25) << endl;
    return 0;
}