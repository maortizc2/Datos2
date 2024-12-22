#ifndef ARTISTA_H
#define ARTISTA_H
using namespace std;

#include <string>
#include <iostream>

class Artista{ //atributos 
public:
    string name;
    string album;
    string genre;
//constructor
    Artista(const string& n ="",const string& a ="",const string& g=""); 
//getters
    string getName() const;
    string getAlbum() const;
    string getGenre() const;
    

// Setters
    void setALbum(const string& a);
    void setGenre(const string& g);

// Sobrecarga del operador << para imprimir objetos Pais
    friend std::ostream& operator<<(std::ostream& os, const Artista& artista);
};

#endif