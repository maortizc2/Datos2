#include "artista.h"

Artista::Artista(const string& n,const string& a, const string& g) : name(n), album(a), genre(g) {}

// Sobrecarga del operador << para imprimir objetos Pais
std::ostream& operator<<(std::ostream& os, const Artista& Artista) {
    os << "Nombre: "<< Artista.name << endl
        << "Album: " << Artista.album << endl
        << "Genero: " << Artista.genre;
    return os;
}

// Getters: Devuelven los atributos del artista
string Artista::getName() const { return name; }
string Artista::getAlbum() const { return album; }
string Artista::getGenre() const { return genre; }


// Setters: Modifican los atributos del artista
void Artista::setALbum(const string& a) { album = a; } //para actualizar los datos del album del artista 
void Artista::setGenre(const string& g) { genre = g; }
