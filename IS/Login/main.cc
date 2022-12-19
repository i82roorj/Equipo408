#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include"glosario.cc"
using namespace std;

int main()
{
    menu();
    int choice;
    cin>>choice;

    switch(choice)
    {
        case 1: //acceso de usuario
            accessUser();
        break;

        case 2: //acceso de visitante
            accessGuest();
        break;

        case 3:
            accessAdmin("username","password");
        break;

    }
}