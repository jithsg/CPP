#include<iostream>
using namespace std;

struct SomeType{
    int mValue;
    constexpr SomeType(int init): mValue(init){}
    constexpr int getValue() const { return mValue; }
    constexpr int operator+(int Other) const { return mValue + Other; }

};

int main(){
    constexpr SomeType st(10);
    cout << st.mValue << endl;
     constexpr int SomeInt { st.getValue()};
    cout << SomeInt << endl;
    cout << st + 20 << endl;
    return 0;
}
