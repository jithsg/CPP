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

class MyClass{

    friend void showPrivateData(MyClass&);
    public:
    MyClass(int val):mVal(val){}

    private:
    int mVal;
};

void showPrivateData(MyClass& obj){
    std::cout<<"Private data: "<<obj.mVal<<std::endl;
}

int main(){
    MyClass obj(10);
    showPrivateData(obj);
    return 0;
}