#include <iostream>
#include <fstream>
#ifndef USUARIO_H
#define USUARIO_H
using namespace std;

class Usuario {
private:
    int idUser;
    string Nombre;
    string Apellidos;
    string DNI;
    string Email;
    int Rol; // 1 para admin, 2 para CCE, 3 para usuario normal


public:
    //Constructor parametrizado con roll por defecto sin usar sobrecarga 
    Usuario(int iduser, string nombre, string apellidos, string dni, string email, int rol=3){
        idUser = iduser;
        Nombre =nombre;
        Apellidos = apellidos;
        DNI = dni;
        Email = email;
    };
    // Getters
    inline int getIdUser(){return idUser;};
    inline string getNombre(){return Nombre;};
    inline string getApellidos(){return Apellidos;};
    inline string getDNI(){return DNI;};
    inline string getEmail(){return Email;};
    inline int getRol(){return Rol;};

    // Setters
    inline void setIdUser(int iduser){ idUser = iduser;};
    inline void setNombre(string nombre){ Nombre = nombre;};
    inline void setApellidos(string apellidos){ Apellidos = apellidos;};
    inline void setDNI(string dni){ DNI = dni;};
    inline void setEmail(string email){ Email = email;};
    inline void setRol(int rol){ Rol = rol;};

    //Funciones
    void VerificarDatosUsuario(); // Se ejecutará siempre en la función registrar un usuario de Login, de momento la dejo aquí.
    void ConsultarCursosInscritos(); // Seguramente habrá que tener un fichero para cada usuario.
};
#endif