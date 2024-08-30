#include "Auth.h"

AuthenticationError :: AuthenticationError(string email, string password): email(email), password(password){}

const char* AuthenticationError :: what() const noexcept{
    return "Authentication error!";
}

void Authenticate(string email, string password){
    throw AuthenticationError(email, password);
}

void Login(string email, string password){
    try{
        Authenticate(email, password);
    }
    catch(AuthenticationError &e){
      throw_with_nested(SecurityError());
        }
}
