#include<concepts>
#include<iostream>

using namespace std;
template<typename T>
concept ConvertibleToFromInt = requires{
    requires convertible_to<T, int>; 
    requires convertible_to<int, T>;
    };


template<ConvertibleToFromInt T>
void TemplateFunction(int x){
    cout << "That was convertible " << int(T{x})<< endl;
}

int main(){
    TemplateFunction<int>(5);
    return 0;
}

