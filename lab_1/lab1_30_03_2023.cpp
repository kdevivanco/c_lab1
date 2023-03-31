#include <iostream>
#include "text.h"
using namespace std;

int main(){
    Text::Text() = default; //constructor por defecto, tambien puede ser Text::Text(){}
    // Constructor por parametros
    Text::Text(const char* texto); //declaracion
    //Constructor copia 
    Text::Text(const Text& other);
    //Constructor move
    Text::Text(Text&&other);
    //Asignacion copia sobre carga de operadores
    Text& operator = (const Text& other); //Asignacion copia
    Text& operator = (Text&& other); //Asignacion move
}