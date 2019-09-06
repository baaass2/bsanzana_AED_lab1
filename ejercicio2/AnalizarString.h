#include <iostream>
#include <list>
using namespace std;

#ifndef ANALIZARSTRING_H
#define ANALIZARSTRING_H

class AnalizarString {
    public:
        AnalizarString ();
        int get_isupper(char str[]);
        int get_islower(char str[]);       
};
#endif