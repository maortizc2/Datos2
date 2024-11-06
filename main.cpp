#include <iostream>
#include "Grafo.h"
using namespace std;

int main() {
    Grafo GrafoVJ;
    string nodoInicial, nodoDestino;

    cout << "|||||||||||||||| SOLUY'S LEGEND ||||||||||||||||||||\n";

    // Agregar nodos y aristas
    GrafoVJ.insertarArista("A", "B", 30, "facil");
    GrafoVJ.insertarArista("B", "C", 20, "dificil");
    GrafoVJ.insertarArista("B", "F", 50, "dificil");
    GrafoVJ.insertarArista("C", "D", 50, "medio");
    GrafoVJ.insertarArista("D", "E", 10, "dificil");
    GrafoVJ.insertarArista("D", "L", 200, "dificil");
    GrafoVJ.insertarArista("E", "F", 10, "facil");
    GrafoVJ.insertarArista("F", "G", 40, "facil");
    GrafoVJ.insertarArista("G", "H", 20, "medio");
    GrafoVJ.insertarArista("H", "I", 20, "dificil");
    GrafoVJ.insertarArista("I", "J", 40, "medio");
    GrafoVJ.insertarArista("J", "K", 30, "dificil");
    GrafoVJ.insertarArista("K", "L", 50, "facil");
    GrafoVJ.insertarArista("K", "O", 10, "dificil");
    GrafoVJ.insertarArista("L", "M", 20, "dificil");
    GrafoVJ.insertarArista("M", "N", 20, "facil");
    GrafoVJ.insertarArista("N", "O", 40, "medio");
    GrafoVJ.insertarArista("O", "P", 20, "medio");
    GrafoVJ.insertarArista("O", "I", 40, "facil");
    GrafoVJ.insertarArista("P", "A", 100, "facil");

    // Output
    cout << "Ingresa el mundo de origen (en mayúscula): ";
    cin >> nodoInicial;
    GrafoVJ.setNodoInicial(nodoInicial);

    cout << "Ingresa el mundo de destino (en mayúscula): ";
    cin >> nodoDestino;

    // Ejecutar Dijkstra y mostrar el camino
    GrafoVJ.dijkstra(nodoInicial);
    GrafoVJ.mostrarCamino(nodoDestino);

    return 0;
}
