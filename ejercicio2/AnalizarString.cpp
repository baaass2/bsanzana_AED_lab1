#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include "AnalizarString.h"
using namespace std;


AnalizarString::AnalizarString(){

}


int AnalizarString::get_isupper(char str[]){
    
    int mayus=0;


    for (int i=0; i<strlen(str); i++){
        if( isupper(str[i]) ){
            mayus = mayus + 1;
        }
    }

    return mayus;
}

int AnalizarString::get_islower(char str[]){
    
    int minus=0;

    for (int i=0; i<strlen(str); i++){

        if(islower(str[i])){
            minus = minus + 1;
        }
    }

    return minus;
}