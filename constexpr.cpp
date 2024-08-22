#include<iostream>
using namespace std;

struct SomeType{
    int mValue;
    constexpr SomeType(int init): mValue(init){}
    constexpr int getValue() const { return mValue; }

};

int main(){
    constexpr SomeType st(10);
    cout << st.mValue << endl;
     constexpr int SomeInt { st.getValue()};
    cout << SomeInt << endl;
    return 0;
}
