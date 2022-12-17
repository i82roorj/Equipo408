#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include "glosario.cc"
using namespace std;


int main()
{
    int choice;
    menu1();
    cin>>choice;

    switch(choice)
    {
        case 1:
            menu2();
            int choice2;
            cin>>choice2;

            switch(choice2)
            {
                case 1:
                    accessUser("usuario","clave");
                break;

                case 2:
                    accessAdmin("usuario","clave");
                break;

                case 3:
                    accessGuest();
                break;
            }

        break;

        case 2:
        break;
    } 
}

