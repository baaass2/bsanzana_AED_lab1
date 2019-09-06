#include <iostream>
#include <list>
using namespace std;

#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente {
    private:
        string nombre = "\0";
        string telefono = "\0";
		int saldo = 0;
        bool morosidad = false;

    public:
        Cliente();
        Cliente (string nombre, string telefono, int saldo, bool morosidad);
      
        string get_nombre();
        string get_telefono();
        int get_saldo();
        bool get_morosidad();

};
#endif