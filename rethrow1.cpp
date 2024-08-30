#include<iostream>
#include<exception>
#include<string>
using namespace std;


class AuthenticationError: public exception{
    public:
        string Email;
        string Password;
        AuthenticationError(string email, string password): Email(email), Password(password){}

        const char* what() const noexcept override{
            return "Authentication error!";
        }

};


void Authenticate(string email, string password){
    throw AuthenticationError(email, password);
}


void Login(string email, string password){
    try{
        Authenticate(email, password);
    }
    catch(AuthenticationError &e){
        if (password.empty()){
            cout << "Password is empty!" << endl;
        }
        else{
            throw;
        }
    }
}


int main(){
    try{
        Login("example@com", "");
    }
    catch(exception &e){
        cout<<"Handled by main: " << endl;
    }
}