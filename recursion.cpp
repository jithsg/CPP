#include <iostream>


// void countdown(int x){

//     if (x==0) return;
//     std::cout<<x<<std::endl;
//     countdown(x-1);
// }
//code for factorial
// int factorial(int x){
//     if (x==1) return 1;
//     return x*factorial(x-1);
    
// }

// int fibonacci(int x){
//     if (x==1) return 1;
//     if (x==2) return 1;
//     return fibonacci(x-1)+fibonacci(x-2);
// }

int factorial(int x){
    if (x==1) return 1;
    return x*factorial(x-1);

}
int countdown(int x){
    if (x==1) return 1;
    std::cout<<x<<std::endl;
    return countdown(x-1);
}

int calls =0;
int fibonacci(int x){
    calls++;
    if (x==1) return 1;
    if (x==2) return 1;
    return fibonacci(x-1)+fibonacci(x-2);
}


int power(int a, int b){
    if (b==1) return a;
    return a*power(a, b-1);

}
int main(){

    // std::cout<<factorial(5)<<std::endl;
    // std::cout<<countdown(5)<<std::endl;
    // std::cout<<fibonacci(5)<<std::endl;
    // std::cout<<calls<<std::endl;
    std::cout<<power(2, 3)<<std::endl;
    
    return 0;
}