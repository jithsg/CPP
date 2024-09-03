#include <iostream>

using namespace std;


template <typename T>
class Character{
    public:
        T m_Health;
    Character(T health):m_Health(health){}
    void print(){
        cout<<"Value: "<< m_Health<<endl;
    }
};


template<>
class Character<string>{
    public:
        string m_Health;
        Character(string health):m_Health(health){}
        void print(){
            cout<<"String Value: "<< m_Health<<endl;
        }
};
int main(){

    Character<int> char1(10);
    Character<float> char2(10.5);
    Character<string> char3("Hello");
    char2.print();
    char1.print();
    char3.print();
}