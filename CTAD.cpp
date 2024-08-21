#include<iostream>
using namespace std;


template<typename T1, typename T2>
class Pair{
    private:
        T1 mFirst;
        T2 mSecond;
    public:
        Pair(const T1& first, const T2& second): mFirst(first), mSecond(second){};
        T1 GetFirst() const {return mFirst;};
        T2 GetSecond() const {return mSecond;};

        void SetFirst(const T1&first){mFirst = first;};
        void SetSecond(const T2& second){mSecond = second;};
};

int main(){
    Pair MyPair1(5, 8.8f);
    cout << MyPair1.GetFirst() << " " << MyPair1.GetSecond() << endl;
    

}