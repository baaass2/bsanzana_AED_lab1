#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include "Cliente.h"

using namespace std;


Cliente::Cliente(string nombre, string telefono, int saldo, bool morosidad){
    this->nombre = nombre;
    this->telefono = telefono;
    this->saldo = saldo;
    this->morosidad = morosidad;

}


string Cliente::get_nombre(){
    return this->nombre;
}


string Cliente::get_telefono(){
    return this->telefono;
}


int Cliente::get_saldo(){
    return this->saldo;
}


bool Cliente::get_morosidad(){
    return this->morosidad;
}
