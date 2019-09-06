#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include "Cliente.h"
#include "Base_deDatos.h"

using namespace std;

void imprimir_datos(Base_deDatos b){

    list<Cliente>cliente = b.get_cliente();

	for (Cliente c : cliente){

        cout << "---------------------" << endl;
        
        if( c.get_morosidad() == true ){
            cout << "Nombre: " << c.get_nombre() << endl;
            cout << "Telefono: " << c.get_telefono() << endl;
            cout << "Saldo: " << c.get_saldo() << endl;
            cout << "CLIENTE MOROSO "<< endl;
        }
        
        else if( c.get_morosidad() == false ){
            cout << "Nombre: " << c.get_nombre() << endl;
            cout << "Telefono: " << c.get_telefono() << endl;
            cout << "Saldo: " << c.get_saldo() << endl;
            cout << "CLIENTE NO MOROSO "<< endl;
        }
        cout << "---------------------" << endl;
    }

}

int main()  {

    int N;

    Base_deDatos b = Base_deDatos();

    cout <<"Cantidad de Clientes a ingresar : "; cin>>N;

    for(int i=0; i<N; i++) {
        string nombre = "\0";
        string telefono = "\0";
		int saldo = 0;
        string aux_morosidad = "\0";
        bool morosidad = false;

		cout <<"Ingrese nombre: "; cin>>nombre;
		cout <<"Ingrese telefono : "; cin>>telefono;
        cout <<"Ingrese saldo : "; cin>>saldo;
        cout <<"¿Cliente moroso? escribir (V/F) : "; cin>>aux_morosidad;
        if( aux_morosidad == "V" ){
            morosidad = true;
        }
        else if( aux_morosidad == "F" ){
            morosidad = false;
        }
				
		Cliente c = Cliente(nombre, telefono, saldo, morosidad);
        b.add_Cliente(c);

    }
    
    imprimir_datos(b);
    
}