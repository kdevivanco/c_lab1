#include <iostream>
#include "text.h"
using namespace std;

int main(){
    Text::Text() = default; //constructor por defecto, tambien puede ser Text::Text(){}
    // Constructor por parametros
    Text::Text(const char* text){
        _sz = strlen(text);
        _text = new char[_sz+1];
        strcpy(_text,text);
    }
    //Constructor copia 
    Text::Text(const Text& other){
        if(&other == this){
            return;
        }
        _sz = other._sz;
        _text = new char[_sz +1];
        strcpy(_text;other._text);
    }
    //Constructor move
    Text::Text(Text&&other);
    //Asignacion copia sobre carga de operadores
    Text& operator = (const Text& other); //Asignacion copia
    Text& operator = (Text&& other); //Asignacion move
}