
#include "Archivo.h"
#include <iostream> //entrada y salida de datos
#include <string>  //manipulacion de cadenas
#include <fstream> //manejo de archivos


//constructor
Archivo::Archivo(){}

void Archivo::leerArchivo(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    string linea;

    if (!archivo) {
        cerr << "No se pudo abrir el archivo: " << nombreArchivo << std::endl;
        return;
    }

    // Limpiar el vector si ya tiene datos
    items.clear();
    //ciclo para leer linea por linea del archivo
    while (std::getline(archivo, linea)) {
        items.push_back(linea);
    }

    archivo.close();
}

//metodo para guardar la informacion del txt 
vector<string> Archivo::obtenerDesen() const {
    if (items.empty()) {
        return {"El archivo está vacío"};
    }
    
    return items; // Retorna los elementos tal como están
}
