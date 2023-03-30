#include <iostream>
#include <typeinfo>
#include <cstring>
using namespace std;


template <typename T> //un template genera una familia de funciones, T es un termino generico
void funcion_1(T texto){
    cout << __PRETTY_FUNCTION__ << endl;
}

int main (){
    std::cout << "Hello World!\n";
    funcion_1(10);
    funcion_1("hola");
    funcion_1(string("hola"));
    const char* texto = "Texto"; // Esto se comporta como un arreglo 
    cout << texto << endl;
    cout << texto[2] << endl;

    
    char* texto2 = new char[6]; // guarda en memoria dinamica

    strcpy( texto2, texto); //solo funciona si sabemos cuantos espacios va a ocupar


    cout << texto2 << endl;
    //para guardar el espacio en heap como blanco ... new char[6]()



    // string variable = "holahoal";
    // cout << typeid(variable).name() << endl;

}

//void funcion_1(T) [T = int]
//void funcion_1(T) [T = const char *]
//void funcion_1(T) [T = std::__1::basic_string<char>]