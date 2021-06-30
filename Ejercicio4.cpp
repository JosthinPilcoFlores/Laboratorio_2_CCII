#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
int tamanio(char*);
int main(){
    char cadena[]="Hola a todo el mundo";
    cout<<tamanio(cadena);
    return 0;
}
int tamanio(char* cadena){
    return strlen(cadena);
}