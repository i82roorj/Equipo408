#include <iostream>
#include <fstream>
#include <vector>
#include "usuario.h"
#ifndef CURSO_H
#define CURSO_H
#define MAXPONENTES 5
using namespace std;

class Curso {
private:

    string nombreCurso;
    int ID;
    string FechaInicio;
    string FechaFin;
    string Descripcion;
    vector<string> Ponentes[MAXPONENTES];
    bool Recursos; // True si hay recursos disponibles, false si no
    int Aforo;
    float Precio;
    struct Estadisticas{
        float porcentajeAprobados;
        int numMatriculados;
    };
    Estadisticas Stats;
public:

    // Constructor parametrizado (template habra que poner algunos parámetros obligatorios o incluso todos menos las stats)
    Curso(string nombre,int id, string fechainit, string fechafin, string desc, int aforo, float price, Curso::Estadisticas stats){
        nombreCurso = nombre;
        ID = id;
        FechaInicio = fechainit;
        FechaFin = fechafin;
        Descripcion = desc;
        Recursos = true;
        Aforo = aforo;
        Precio = price;
        Stats.numMatriculados = stats.numMatriculados;
        Stats.porcentajeAprobados = stats.porcentajeAprobados;
    };
    // Getters
    inline string getNombreCurso(){return nombreCurso;};
    inline int getID(){return ID;};
    inline string getFechaInicio(){return FechaInicio;};
    inline string getFechaFin(){return FechaFin;};
    inline string getDescripcion(){return Descripcion;};
    inline vector<string> getPonentes(){return Ponentes[MAXPONENTES];};
    inline bool getRecursos(){return Recursos;};
    inline int getAforo(){return Aforo;};
    inline float getPrecio(){return Precio;};
    inline Curso::Estadisticas getStats(){return Stats;}; // Este es solo para poner todos los setters y getters porque no se pueden hacer 2 returns.

    // Setters
    inline void setNombreCurso(string nombre){ this->nombreCurso= nombre;};
    inline void setID(int id){this->ID = id;};
    inline void setFechaInicio(string fecha){this->FechaInicio = fecha;};
    inline void setFechaFin(string fecha){this->FechaFin = fecha;};
    inline void setDescripcion(string desc){this->Descripcion = desc;};
    inline void setPonentes(vector<string> ponentes[MAXPONENTES]){Ponentes == ponentes;};
    inline void setRecursos (bool recursos){Recursos = recursos;};
    inline void setAforo (int aforo){Aforo = aforo;};
    inline void setPrecio(int precio){Precio = precio;};
    inline void setStats(Estadisticas stat){Stats.numMatriculados = stat.numMatriculados; Stats.porcentajeAprobados=stat.porcentajeAprobados;};
    
    // Funiones
    void CrearCurso (); //Esta funcion no es necesario si especificamos en el constructor los datos, ya vere como la hago
    void ModificarCurso(int id, string nombre);
    void EliminarCurso(int id, string nombre);
    void InscribirCurso(Usuario user);
    inline void MostratStats(){cout<<"El porcentaje de aprobados del curso es: "<<Stats.porcentajeAprobados<< "%"<<endl<< "El numero de matriculados es: "<<Stats.numMatriculados<<endl;};
    void GenerarCertificado(Usuario user, string auxdni); // Esto seguramente habra que hacerlo en la clase usuario creo
    void ArchivarCurso();
    void EliminarUsuario(Usuario user);
    void GenerarStats(); // Esta función se va a utilizar al archivar un curso.
};  
#endif