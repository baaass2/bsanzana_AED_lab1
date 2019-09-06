#include <iostream>
#include <string>
#include <ctime>
#include <random>
using namespace std;

#ifndef CUADRADOS_H
#define CUADRADOS_H

class Cuadrados {
    private:
        int resultado;

    public:
        Cuadrados();
        
        int get_Resultado();
        void Calculo(int N, int num_enteros[]);


};
#endif
