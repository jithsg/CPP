#include<iostream>
#include<string>
using namespace std;



class AuthenticationError{
    public:
        string Message {" A user failed to log in"};
        string Email;
        string Password;
        AuthenticationError(string email, string password) : Email(email), Password(password) {}

};


int main(){
    try {
        throw AuthenticationError("user1@gmail.com", "12345");
    }
    catch (AuthenticationError& e) {
        cout << e.Message << endl;
        cout << "Email: " << e.Email << endl;
        cout << "Password: " << e.Password << endl;
    }
    return 0;
}