#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <string> //manejo de cadenas
#include <vector> //manejo y creacion de vectores
#include <fstream> //manejo de archivos 
#include <cstdlib> // para rand y srand  
using namespace std;

class Archivo{
    private:
    vector<string>items;
    
    public: 
    Archivo(); //constructor
    //metodos
    vector<string> obtenerDesen() const;
    void leerArchivo(const string& nombreArchivo);
};

#endif