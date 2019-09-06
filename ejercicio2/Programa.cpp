#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include "AnalizarString.h"
using namespace std;



int main(){

    int mayus=0;
    int minus=0;
    
    char str[100];

	printf( "Introduzca su texto (100 caracteres máximo): " );
	cin.getline(str,100);

    AnalizarString s = AnalizarString();
    mayus = s.get_isupper(str);
    minus = s.get_islower(str);

    std::cout << "Cantidad de mayusculas: "  << mayus << std::endl; 
    std::cout << "Cantidad de minusculas: "  << minus << std::endl;     
}
