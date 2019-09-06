#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include "AnalizarString.h"
using namespace std;



int main(){

    int mayus=0;
    int minus=0;
    
    string texto;    
    char* str;

    printf( "Introduzca su texto : " );
    getline(cin,texto);
    
    str = (char *)texto.c_str();

    AnalizarString s = AnalizarString();
    mayus = s.get_isupper(str);
    minus = s.get_islower(str);

    std::cout << "Cantidad de mayusculas: "  << mayus << std::endl; 
    std::cout << "Cantidad de minusculas: "  << minus << std::endl;     
}
