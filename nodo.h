#ifndef NODO_H
#define NODO_H

#include "artista.h"

class Nodo{
    private:
        Artista artista;
        Nodo* next;
    
    public:
    //constructor: inicializa un nodo con un artista
        Nodo(const Artista& a);

    //getters and setter 
        Artista getArtista() const;
        void setArtista(const Artista& a);
        Nodo* getNext() const;
        void setNext(Nodo* n);
};

#endif