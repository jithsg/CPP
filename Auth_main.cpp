#include "Auth.h"


int main(){
    try{
        Login("example@com", "ii");
    }
    catch(exception &e){
        cout << "Handled by main!" << endl;
    }
        cout<< "Program Recovered!" << endl;
}