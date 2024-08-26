
#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // int int_result = add(3, 4);       // Works with int
    // double double_result = add(3.5, 2.1); // Works with double
    // return 0;

    cout<< add<int>(3, 4) << endl; 
    cout<<add<double>(3.1,2.5)  << endl;  
    
    int res_int = add(3,4);
    double res_double= add(3.4, 2.4);
    
    cout<<res_int<<endl;
    cout<<res_double<<endl;// Works with int
}
