#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"login.cc"
#include"../Usuario/usuario.h"

using namespace std;
#ifndef LOGIN_H
#define LOGIN_H

class login
{
private:
    string password;
    string username;

public:
    login(/* args */);
    ~login();

    string getPassword(){return this->password;};
    string getUsername(){return this->username;};
    void setPassword(string auxpass){password = auxpass;};
    void setUsername(string auxuser){username = auxuser;};
    bool VerificarUsuario(string user, string pass);
    bool verificarRol(string user, string pass);
    bool RegistrarUsuario (Usuario user);
};










#endif