#pragma once
#include <iostream>
using namespace std;

class AuthenticationError: public exception {
    public:
        string email;
        string password;
        AuthenticationError(string email, string password);

        const char*what() const noexcept override;
};

class SecurityError: public exception{};

void Authenticate(string email, string password);

void Login(string email, string password);
