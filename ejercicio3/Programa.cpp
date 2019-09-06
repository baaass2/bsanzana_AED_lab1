#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include "Cliente.h"


using namespace std;

void imprimir_datos(Cliente clientes[], int N){

    for (int i=0; i<N; i++){

        cout << "---------------------" << endl;
        
        if( clientes[i].get_morosidad() == true ){
            cout << "Nombre: " << clientes[i].get_nombre() << endl;
            cout << "Telefono: " << clientes[i].get_telefono() << endl;
            cout << "Saldo: " << clientes[i].get_saldo() << endl;
            cout << "CLIENTE MOROSO "<< endl;
        }
        
        else if( clientes[i].get_morosidad() == false ){
            cout << "Nombre: " << clientes[i].get_nombre() << endl;
            cout << "Telefono: " << clientes[i].get_telefono() << endl;
            cout << "Saldo: " << clientes[i].get_saldo() << endl;
            cout << "CLIENTE NO MOROSO "<< endl;
        }
        cout << "---------------------" << endl;
    }


}


int main()  {
    
    int N;
    
    cout <<"Cantidad de Clientes a ingresar : "; cin>>N;
    Cliente *clientes = new Cliente[N];

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
        clientes[i] = c;

    }
    imprimir_datos(clientes, N);

}