#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include "Base_deDatos.h"
#include "Cliente.h"


using namespace std;


Base_deDatos::Base_deDatos(){

    list<Cliente>cliente;
    this->cliente = cliente;
}


void Base_deDatos::add_Cliente(Cliente c) {
	this->cliente.push_back(c);

}

list<Cliente> Base_deDatos::get_cliente() {
    return this->cliente;
}