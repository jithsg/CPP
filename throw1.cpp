#include <iostream>
#include <exception>    
using namespace std;


class CustomException: public exception{
    public:
        const char* what() const noexcept override{
            return "Custom exception called!";
        }
};


int main(){
    try {
    throw CustomException();
    }
    catch(CustomException &e){
        cout << e.what() << endl;
    }
}