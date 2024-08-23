
#include<iostream>  


using namespace std;
template <typename T>
constexpr T Pi {3.1415926535897932385};

struct Custom{
    int mValue;
    constexpr Custom(float value): mValue(int(value)){}
};

template<int x, int y>
constexpr int Result{x +y};

int main(){
cout <<  Result<10, 20> << endl;

    return 0;
}