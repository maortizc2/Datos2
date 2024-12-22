#include "tablahash.h"
#include <iostream> //lo incluyo para operaciones d eentrada y salida 

//constructor : inicializa la tabla hash con punteros nulos 
TablaHash::TablaHash():table(TABLE_SIZE,nullptr){}

//Destructor : libera el espacio de memoria de todos los nodos en la tabla hash
TablaHash::~TablaHash(){
    for(Nodo* head: table){
        while(head){
            Nodo* tem = head;
            head = head -> getNext();
            delete tem;
        }
    }
}

//Funcion Hash
int TablaHash::hash(const string& key)const{
    int hash = 0;
    for(char c: key){ // recorre cada caracter de la cadena recopilando el valor ASCI
        hash = (hash * 31 + c)% TABLE_SIZE; // el restante tendra como maximo el contenido de la tabla -1
    }
    return hash; //indice de la tbla
}

//Funcion de insertar un nuevo artista
void TablaHash::insert(const Artista& artista){
    int index = hash(artista.getName());
    Nodo* newNodo = new Nodo(artista);

    if(!table[index]){
        table[index] = newNodo;
    }else{
        newNodo->setNext(table[index]);
        table[index] = newNodo;
    }
}

// Busca un artista por nombre y devuelve sus datos
bool TablaHash::get(const string& name, Artista& artista) const {
    int index = hash(name);
    Nodo* current = table[index];
    
    while (current) {
        if (current-> getArtista().getName() == name) {
            artista = current->getArtista();
            return true;  // Artista encontrado
        }
        current = current->getNext();
    }
    return false;  // Artista no encontrado
}

// Elimina un artista de la tabla hash por nombre
bool TablaHash::remove(const std::string& name) {
    int index = hash(name);
    Nodo* current = table[index];
    Nodo* prev = nullptr;
    
    while (current) {
        if (current->getArtista().getName() == name) {
            if (prev) {
                prev->setNext(current->getNext());
            } else {
                table[index] = current->getNext();
            }
            delete current;
            return true;  // Artista eliminado
        }
        prev = current;
        current = current->getNext();
    }
    return false;  // Artista no found
}

// Imprime todos los artistas en la tabla hash
void TablaHash::printAll() const {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        Nodo* current = table[i];
        if (current) {
            cout << "Index " << i << ":" << endl;
            while (current) {
                cout << current->getArtista() << endl;
                cout<<"---------------------------------------------------"<<endl;
                current = current->getNext();
            }
        }
    }
}

