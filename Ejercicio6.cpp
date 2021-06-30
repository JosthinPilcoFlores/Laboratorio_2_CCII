#include <iostream>
#include <ctime>
using namespace std;
void ordenar(string [],int);
int main(){
    srand(time(NULL));
    int tam=4;
    string cadena[tam];
    for(int i=0;i<tam;i++){
        cadena[i]=rand()%26+65;
    }
    for(int i=0;i<tam;i++){
        cout<<cadena[i]<<" ";
    }
    cout<<endl;
    ordenar(cadena,tam);
    for(int i=0;i<tam;i++){
        cout<<cadena[i]<<" ";
    }
    return 0;
}
void ordenar(string a[],int tam){
    for(int i=0;i<tam-1;i++){
        int indice=i;
        string menor=a[i],temp;
        for(int j=i;j<tam;j++){
            if(a[j]<menor){
                menor=a[j];
                indice=j;
            }
        }
        temp=a[i];
        a[i]=menor;
        a[indice]=temp;
    }
}