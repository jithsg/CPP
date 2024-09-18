#include <iostream>

class MyClass{

    friend void LogCall(MyClass);
    public:
    void operator()(){
        Calls++;

    }

    private:
    int Calls{0};

};

void LogCall(MyClass obj){
    std::cout<<"Calls made: "<<obj.Calls<<std::endl;
}


int main(){
    MyClass obj;
    obj();
    obj();
    obj();
    LogCall(obj);
    return 0;
}