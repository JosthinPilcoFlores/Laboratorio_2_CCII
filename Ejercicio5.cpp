#include <iostream>
using namespace std;
void concatenar(char [],char[],int,int);
void mostrar(char [],int);
int main(){
    char a[11]="Hola ";
    char b[6]="mundo";
    concatenar(a,b,12,6);
    mostrar(a,11);
    mostrar(b,5);
    return 0;
}
void concatenar(char a[],char b[],int tamA,int tamB){
    int j=0;
    for(int i=tamB;i<tamA;i++){
        a[i]=b[j];
        j++;
    }
}
void mostrar(char a[],int tam){
    for(int i=0;i<tam;i++){
        cout<<a[i];
    }
    cout<<endl;
}