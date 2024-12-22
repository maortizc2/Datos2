#ifndef TABLA_HASH_H
#define TABLA_HASH_H
#include "nodo.h"
#include <vector>

class TablaHash {
private:
    static const int TABLE_SIZE = 100;
    vector <Nodo*> table;

//funcion hash: convierte una clave en un indice de la tabla 
    int hash(const string& key)const;
public:
    TablaHash();//Constructor
    ~TablaHash(); //Destructor 
    //funciones dentro de la tabla hash 
    void insert (const Artista& artista); //insertar un nuevo artista
    bool get(const string& name, Artista& artista)const;
    bool remove(const string& nombre); //elimina un artista de la tabla hash por nombre
    void printAll()const;//imprime todos los artistas en la tabla hash

};




#endif
