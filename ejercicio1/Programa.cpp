#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include "Cuadrados.h"
using namespace std;


int main(){
    
    int N;
    

    cout <<"Largo de array: "; cin>>N;

    int num_enteros[N];
    int resultado;

    std::mt19937 generator;
    generator.seed(std::time(0));
    std::uniform_int_distribution<uint32_t> dice(1,10);
    

    for(int i=0; i<N; i++){
        int rand = dice(generator);
        num_enteros[i] = rand;
    }

    for(int k=0; k<N; k++){
        std::cout << num_enteros[k] << std::endl;   
    }

    Cuadrados c = Cuadrados();
    c.Calculo(N, num_enteros);
    resultado = c.get_Resultado();
    
    std::cout << resultado << std::endl;   

    return 0;
}