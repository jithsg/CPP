#include<iostream>
using namespace std;


class Dragon{
    public:

        virtual void Fly(){
            cout<<"Dragon is flying"<<endl;
        }
};

class FireDragon: public Dragon{
    public:

        void Fly() override{
            cout<<"FireDragon is flying"<<endl;
        }
};

void callMethod(Dragon& object){
    object.Fly();
}

int main(){
    Dragon d;
    callMethod(d);
    FireDragon fd;
    callMethod(fd);
    return 0;
}