#include "nodo.h"

Nodo::Nodo(const Artista& a) : artista(a),next(nullptr){}

//Getter: devulve el artista almacenado en el nodo
Artista Nodo::getArtista() const{ return artista; }

//Setter: Establece el artista del nodo
void Nodo::setArtista( const Artista& a) { artista = a; }

//Getter: devuelve el puntero al siguiente nodo
Nodo* Nodo::getNext() const { return next; }

//Setter: establece el puntero al siguiente nodo 
void Nodo:: setNext(Nodo* n) {next = n;}