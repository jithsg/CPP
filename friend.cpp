#include <iostream>

// class MyClass{

//     friend void LogCall(MyClass);
//     public:
//     void operator()(){
//         Calls++;

//     }

//     private:
//     int Calls{0};

// };

// void LogCall(MyClass obj){
//     std::cout<<"Calls made: "<<obj.Calls<<std::endl;
// }


// int main(){
//     MyClass obj;
//     obj();
//     obj();
//     obj();
//     LogCall(obj);
//     return 0;
// }

// class MyClass{

//     friend void showPrivateData(MyClass& obj){
//         std::cout<<"Private data: "<<obj.mVal<<std::endl;
//     }
//     public:
//     MyClass(int val):mVal(val){}

//     private:
//     int mVal;
// };

// // void showPrivateData(MyClass& obj){
// //     std::cout<<"Private data: "<<obj.mVal<<std::endl;
// // }

// int main(){
//     MyClass obj(10);
//     showPrivateData(obj);
//     return 0;
// }

// class B;


// class A{

//     friend void B::showPrivateData(A);

//     private:
//     int mVal;

//     public:
//     A(int val):mVal(val){}

// };


// class B{
//     public:
//     static void showPrivateData(A obj){
//         std::cout<<"Private data of A: "<<obj.mVal<<std::endl;
//     }

// };

// int main(){
//     A obj(10);
//     B b;

//     A.showPrivateData(obj);


// }

class B;


class A{
    public:
    
    
    A(int val):mVal(val){};

    friend void B::showPrivateData(A& obj);

    private:
    int mVal;

};

class B{
public:
    void showPrivateData(A& obj){
        std::cout<<"Private Data: "<<obj.mVal<<std::endl;
    }

};

int main(){
    A obj(10);
    B b;
    b.showPrivateData(obj);
    return 0;
}
