#include<iostream>
using namespace std;

template<typename T1, typename T2>

class Pair{
    private:
        T1 mFirst;
        T2 mSecond;
    public:
        Pair(const T1& first, const T2& second): mFirst(first), mSecond(second){}

        T1 GetFirst() const {return mFirst;}
        void SetFirst(const T1& first){mFirst = first;}

        T2 GetSecond() const {return mSecond;}
        void SetSecond(const T2& second) {mSecond = second;}

};

int main(){
    Pair<int, float> Pair1{5, 3.14f};

}