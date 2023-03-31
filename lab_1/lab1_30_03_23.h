//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT1_TEXT_V2023_1_TEXT_H
#define PROG3_UNIT1_TEXT_V2023_1_TEXT_H


class Text{
    char* _text = nullptr; //iniciacion in class. Como es puntero = nullptr 
    int _size = 0; //iniciacion in class (porque se le asigna un valor) 

    public:
    Text() = default; //constructor por defecto, tambien puede ser Text(){}
    // Constructor por parametros
    Text(const char* texto); //declaracion
    //Constructor copia 
    Text(const Text& other);
    //Constructor move
    Text(Text&&other) noexcept;
    //Asignacion copia sobre carga de operadores
    Text& operator = (const Text& other); //Asignacion copia
    Text& operator = (Text&& other) noexcept; //Asignacion move

    // //operador ^ 
    // Text operador^(const Text& other);

    //Siempre que se usa un constructor move se tiene que poner noexcept al final de la declaracion

    void operator++();
};

//Text operator^(const Text& texto1, const Text& texto2) //Sobre carga como funcion 

#endif //PROG3_UNIT1_TEXT_V2023_1_TEXT_H
