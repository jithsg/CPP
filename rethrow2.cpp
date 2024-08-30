#include<iostream>
#include<string>
#include<exception>
using namespace std;


class AuthenticationError: public  exception{  
    public:
        string email;
        string password;
        AuthenticationError(string email, string password): email(email), password(password){}

        const char* what() const noexcept override{
            return "Authentication error!";
        }     
};

void Authenticate(string email, string password){
    throw AuthenticationError(email, password);
}

void login(string email, string password){
    try{
        Authenticate(email, password);
    }
    catch (AuthenticationError &e){
        if (password.empty()){
            cout << "Handled by login!" << endl;
        }
        else{
            throw;
        }
    }
}

int main(){
    try{
        login("example@com", "ii");
    }
    catch(exception &e){
        cout << "Handled by main!" << endl;
    }
}