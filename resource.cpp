#include<iostream>
#include "resource.h"
using namespace std;

int main(){
    Resource<int> A {42};
    A.Log();
}