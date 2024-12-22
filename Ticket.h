#ifndef TICKET_H
#define TICKET_H
#include "Archivo.h"
#include <string> // manejo de cadenas de texto
#include <iostream> //entrada y salida estandar


class Ticket {
    private:
    int year, month, day, ticketId, camId, userId;
    string plate, nameUser;
    bool vel;

    public:
    //constructor
    Ticket(int year, int month, int day, int ticketId, int camId,
        const string& plate, const string& nameUser,
        int userId, bool vel);
    
    //metodo de verificacion de fecha y placa
    bool verificacion(int año, int mes, int dia, const string& placa) const {
    return (year == año && month == mes && day == dia && this->plate == placa);
}

    //Metodo para imprimir los datos en caso de que sea verdadero el exceso de velocidad 
    void excesoVelocidad(vector<string>obtenerDesen(),Ticket);
    //metodo para imprimir 
    void imprimir()const;
    //sobrecarga de  <<
    friend ostream& operator<<(ostream& os, Ticket& ticket);
};

#endif