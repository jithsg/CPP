#include<iostream>
using namespace std;
#include<span>

void Handle(span<int> s){
    cout<<s.size()<<endl;
}

int main(){
    int arr[]{1,2,3,4,5};
    span<const int> arrSpan{arr};
    cout<<arrSpan.size()<<endl;
    for (auto num: arrSpan){
        cout<<num<<endl;
    }
  
}