#include <iostream>
using namespace std;


template<typename T>
constexpr T Pi {3.1415926535897932385};

int main(){

    constexpr double PiDouble {Pi<double>};

    cout << PiDouble << endl;

}