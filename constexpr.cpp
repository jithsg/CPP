#include<iostream>
using namespace std;

template <int SomeInt>
class Resource{
    public:
        int mValue {SomeInt};

};

int main(){
    Resource<5> five;
    cout << five.mValue << endl;

    Resource<6> six;
    cout << six.mValue << endl;

    return 0;
}
