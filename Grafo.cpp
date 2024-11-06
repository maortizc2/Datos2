#include "Grafo.h"
#include <algorithm>
#include <unordered_map>

// Constructor y Destructor
Grafo::Grafo() {}
Grafo::~Grafo() {}

// Implementación del método para configurar el nodo inicial
void Grafo::setNodoInicial(const std::string& nodoInicial) {
    primerNodo = nodoInicial;
}

// Función para calcular el costo basado en distancia y dificultad
int Grafo::calcularCosto(int distancia, const string& dificultad) const {
    float factorDificultad;
if (dificultad == "facil") {
    factorDificultad = 0.5;
} else if (dificultad == "medio") {
    factorDificultad = 1.2;
} else {
    factorDificultad = 1.6;
}

    return distancia * factorDificultad;
}

// Metodo para insertar una arista con distancia y dificultad
void Grafo::insertarArista(const string& nodo, const string& vecino, int distancia, const std::string& dificultad) {
    grafo[nodo][vecino] = {distancia, dificultad}; 
    // se crea el grafo  con nddo y ndo destino/vecino con el cual recibira 2 pares de info
}

// Implementación del algoritmo de Dijkstra
void Grafo::dijkstra(const std::string& nodoInicio) {
    priority_queue<pair<int, string>, vector<pair<int, string>>, greater<>>cola;
    //almacenar  nodos ordenados por el costo mas bajo,
    cola.push({0, nodoInicio});
    costos[nodoInicio] = 0;
    padres[nodoInicio] = "Nadie";

    while (!cola.empty()) {
        auto [costoActual, nodoActual] = cola.top();
        cola.pop();

        for (const auto& [vecino, arista] : grafo[nodoActual]) {
            int nuevoCosto = costoActual + calcularCosto(arista.distancia, arista.dificultad);

            if (costos.find(vecino) == costos.end() || nuevoCosto < costos[vecino]) {
                costos[vecino] = nuevoCosto;
                padres[vecino] = nodoActual;
                cola.push({nuevoCosto, vecino});
            }
        }
    }
}

// Implementacion para mostrar el camino mas corto de un lugar a otro y devolver la informacion de la trayectoria 
void Grafo::mostrarCamino(const string& nodoDestino) const {
    if (padres.find(nodoDestino) == padres.end()) {
        cout << "No hay camino hacia " << nodoDestino << endl;
        return;
    }
    vector<string> camino;
    string nodo = nodoDestino;
    // Reconstruir el camino inverso desde nodoDestino a nodoInicial usando el mapa de padres
    while (nodo != "Nadie") {
        camino.push_back(nodo);
        nodo = padres.at(nodo);
    }
    // Invierte el camino para obtener la dirección de nodoInicial a nodoDestino
    reverse(camino.begin(), camino.end());
    // Inicializa acumulador de distancia total
    int distanciaTotal = 0;
    //Imprime la trayectoria 
    cout <<"|||||||||||||||||||||||||||||||||||||||||||||||||||\n"
    << "Camino mas corto desde " << camino.front() << " hasta " << camino.back() << ":\n";
    for (size_t i = 0; i < camino.size() - 1; ++i) {
        string nodoActual = camino[i];
        string nodoSiguiente = camino[i + 1];
        // Distancia y dificultad del arista
        int distancia = grafo.at(nodoActual).at(nodoSiguiente).distancia;
        string dificultad = grafo.at(nodoActual).at(nodoSiguiente).dificultad;
        int costo = calcularCosto(distancia, dificultad);
        // Sumar la distancia al acumulador
        distanciaTotal += distancia;
        // Imprime la informacion del arista
        cout << "Desde " << nodoActual << " hasta " << nodoSiguiente << ":\n";
        cout << "Distancia: " << distancia << "\n";
        cout << "Dificultad: " << dificultad << "\n";
        cout << "Costo: " << costo << "\n";
        cout << "--------------------------------------------------------------------------------\n";
    }
    // Imprime la distancia total del trayecto
    cout << "Distancia total desde " << camino.front() << " hasta " << camino.back() << ": " << distanciaTotal << endl;
    cout << "Fin del camino\n";
}
