#include<iostream>

using namespace std;


class Example{
    public:
        void display(int a){
            cout << "Integer: " << a << endl;
        }
        void display(double a){
            cout << "Double: " << a << endl;
        }
};


int main(){
    Example obj;
    obj.display(5);
    obj.display(5.5);
    return 0;
}