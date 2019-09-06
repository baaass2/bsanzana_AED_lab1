#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include "Cuadrados.h"
using namespace std;

     
Cuadrados::Cuadrados(){
    this->resultado = resultado;       
}


void Cuadrados::Calculo(int N, int num_enteros[]){
    
    int cuadrado=0;
    int resultado=0;

    for(int k=0; k<N; k++){
        cuadrado = num_enteros[k]*num_enteros[k];
        resultado = resultado + cuadrado;
    }   

    this->resultado= resultado;
}


int Cuadrados::get_Resultado(){
    
    return this->resultado;
}

