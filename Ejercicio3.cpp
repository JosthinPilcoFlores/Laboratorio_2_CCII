#include <iostream>
#include <ctime>
using namespace std;
void ordenar(int[],int);
int main(){
    srand(time(NULL));
    int tam=1000000;
    int*a=NULL;
    a= new int[tam];
    for(int i=0;i<tam;i++){
        a[i]=rand()%9+1;
    }
    ordenar(a,tam);
    for(int i=0;i<tam;i++){
        cout<<a[i]<<" ";
    }
    delete[] a;
    a=NULL;
    return 0;
}
void ordenar(int a[],int tam){
    for(int i=0;i<tam;i++){
        int menor=a[i],indice,temp;
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