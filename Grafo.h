#ifndef GRAFO_H
#define GRAFO_H
#include <unordered_map>
#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

class Grafo {
    private:
        // Estructura para almacenar la distancia y dificultad de una conexión
        struct Arista {
            int distancia;
            string dificultad;
        };

        // Mapa de adyacencia: cada nodo tiene un mapa de vecinos con sus respectivas aristas (distancia y dificultad)
        unordered_map<string, unordered_map<string, Arista>> grafo;
        string primerNodo;

        // Mapas para almacenar el estado en el algoritmo de Dijkstra
        unordered_map<string, int> costos;
        unordered_map<string, string> padres;

        // Función para calcular el costo real considerando la distancia y dificultad
        int calcularCosto(int distancia, const string& dificultad) const;

    public:
        Grafo(); // Constructor
        ~Grafo(); // Destructor

        // Métodos principales
        void setNodoInicial(const string& nodoInicial);
        void insertarArista(const string& nodo, const string& vecino, int distancia, const string& dificultad);
        void dijkstra(const string& nodoInicio);
        void mostrarCamino(const string& nodoDestino) const;
};


#endif // GRAFO_H