#include "Ticket.h"
#include <iostream> //entrada y salida estadndar

//Constructor
    Ticket::Ticket(int year, int month, int day, int ticketId, int camId,
        const string& plate, const string& nameUser,
        int userId, bool vel) 
        : year(year), month(month), day(day), ticketId(ticketId),
        camId(camId), plate(plate), nameUser(nameUser), userId(userId), vel(vel) {}

//imprimir datos de ticket
void Ticket::imprimir() const {
    cout<<"--------------------------------------------------------------" << endl;
    cout << "Fotomulta Número: " << ticketId << endl
        << "Fecha: " << year << "-" << month << "-" << day << endl
        << "Cámara Número: " << camId << endl
        << "Número de Placa: " << plate << endl
        << "Nombre Propietario: " << nameUser << endl
        << "ID Propietario: " << userId << endl;
    //Verificacion del true y false 
    if (vel==true) {
        cout << "Estado: Velocidad Excedida" << endl;
    } else {
        cout << "Estado: Velocidad Dentro de Límite" << endl;
    }
    cout<<"--------------------------------------------------------------" << endl;
}
//sobrecarga del operador <<
ostream& operator<<(ostream &out, Ticket &t){
    out << "Año: " << t.year <<" , Mes: "<< t.month <<", Dia: "<<t.day
        <<" , Id camara: "<< t.camId << ", Id Ticket: "<<t.ticketId<<", Numero de placa: "
        <<t.plate<<" , Nombre propietario: "<<t.nameUser << ", Id Propietario: "<<t.userId;
        return out;
}





