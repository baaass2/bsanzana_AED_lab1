#include <iostream>
#include <list>
#include "Cliente.h"
using namespace std;

#ifndef BASEDEDATOS_H
#define BASEDEDATOS_H

class Base_deDatos {
    private:
        list<Cliente>cliente;

    public:
        Base_deDatos ();
      
        void add_Cliente(Cliente c);
        list<Cliente>get_cliente(); 
};
#endif