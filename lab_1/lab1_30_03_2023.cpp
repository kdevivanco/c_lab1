#include <iostream>
#include "text.h"
using namespace std;

int main(){
    //construct
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
    Text::Text(Text&&other){
        if(&other == this) return;
        _sz = other._sz;
        _text = other._text;
        other._sz = 0;
        other._text = nullptr;
    }

    //Asignacion copia sobre carga de operadores
    Text::Text& operator = (const Text& other){
        if(&other == this){
            return *this;
        }

        _sz = other._sz;
        delete[]_text;
        _text = new_char[_sz+1];
        strcpy(_text,other._text);
        return *this;
    }

    //Asignacion Move
    Text::Text& operator = (Text&& other){
        _sz = other._sz;
        delete[]_text;
        _text = other._text;
        other._sz=0;
        other._text = nullptr
    }
}