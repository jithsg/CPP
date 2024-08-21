#include<iostream>
#include "pair.h"
using namespace std;


int main(){
    Pair<int, double> A {42, 3.14};
    A.setFirst(45);
    A.setSecond(3.14159);
    cout << "First: " << A.getFirst() << ", Second: " << A.getSecond();
    
}


