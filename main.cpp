#include <iostream>
#include <string>
#include <vector>
#include "Archivo.h"
#include "Ticket.h"
using namespace std;

//Funcion que me devuelve el vector de Ticket
vector<Ticket> generarTicket(int cantidadTicket, const Archivo& archivoYear, const Archivo& archivoMonth,
                            const Archivo& archivoDay, const Archivo& archivoTicketId, const Archivo& archivoCamId,
                            const Archivo& archivoPlate, const Archivo& archivoNameUser, const Archivo& archivoUserId,
                            const Archivo& archivoVel) {
    vector<Ticket> vectorTicket; //creacion del vector que almacena los obejtos que se genran
    //leectura de datos y convertirlo al tipo de dato que es
    for (int i = 0; i < cantidadTicket; ++i) { 
        int year = stoi(archivoYear.obtenerDesen().at(i));
        int month = stoi(archivoMonth.obtenerDesen().at(i));
        int day = stoi(archivoDay.obtenerDesen().at(i));
        int ticketId = stoi(archivoTicketId.obtenerDesen().at(i));
        int camId = stoi(archivoCamId.obtenerDesen().at(i));
        string plate = archivoPlate.obtenerDesen().at(i);
        string nameUser = archivoNameUser.obtenerDesen().at(i);
        int userId = stoi(archivoUserId.obtenerDesen().at(i));
        bool vel = (archivoVel.obtenerDesen().at(i) == "true");
    
    /*Si es necesario observar la creacion para poder visualizar la busqueda  de una manera mas acertada
    cout << "Valor leído para vel: " << archivoVel.obtenerDesen()[i] << endl; // Muestra el valor leído
    cout << "Velocidad para la placa: " << plate << endl; // Muestra el valor de vel
    cout << "fecha:"<<year<<"-"<< month<<"-"<<day<<endl;*/

        // Crear un nuevo ticket y agregarlo al vector
        Ticket ticket(year, month, day, ticketId, camId, plate, nameUser, userId, vel);
        vectorTicket.push_back(ticket);
    }   return vectorTicket;
}

    int main(){
  //crear objetos Ticket y leer los datos de los archivos correspondientes
    Archivo archivoYear;
    archivoYear.leerArchivo("Year.txt");
    Archivo archivoMonth;
    archivoMonth.leerArchivo("Month.txt");
    Archivo archivoDay;
    archivoDay.leerArchivo("Day.txt");
    Archivo archivoTicketId;
    archivoTicketId.leerArchivo("TicketId.txt");
    Archivo archivoCamId;
    archivoCamId.leerArchivo("CamId.txt");
    Archivo archivoPlate;
    archivoPlate.leerArchivo("Plate.txt");
    Archivo archivoNameUser;
    archivoNameUser.leerArchivo("NameUser.txt");
    Archivo archivoUserId;
    archivoUserId.leerArchivo("UserId.txt");
    Archivo archivoVel;
    archivoVel.leerArchivo("Vel.txt");
    
    //Crear los datos dummies usando los metodos de clase
    //Final al que debo llegar 18250000 // Al generar esa cantidad de data dummies la RAM de mi cp colapzo , max 5000 datadummies
    int cantidadTicket = 1000;
    vector<Ticket>tickets = generarTicket(cantidadTicket, archivoYear, archivoMonth, archivoDay,
                                        archivoTicketId, archivoCamId, archivoPlate, archivoNameUser, archivoUserId, archivoVel);
    //Menu para ingresar datos  
    int año,mes,dia; 
    string placa;
    cout <<"======================================================"<<endl;
    cout << "Ingrese el año(Formato AAAA): ";
    cin >> año;
    cout <<"ingrese el mes(Formato MM): ";
    cin >> mes;
    cout <<"Ingrese dia(Formato DD): ";
    cin >> dia;
    cout << "ingrese la placa(Formato ZZZ999): ";
    cin>>placa;
    cout <<"======================================================"<<endl;
//ciclo de busqueda lineal
bool found = false;
    for (const Ticket& ticket : tickets) {
    if (ticket.verificacion(año, mes, dia, placa)) {
        ticket.imprimir();
        found = true;
    }
} if (!found) {
        cout << "No se encontró infracción en esa fecha.\n";
}return 0;
}

