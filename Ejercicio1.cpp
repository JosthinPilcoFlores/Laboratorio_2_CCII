#include <iostream>
#include <ctime>
using namespace std;
int sumaArrayIterativa(int[],int tam);
int sumaArrayRecursiva(int[],int tam);
int main(){
    int tam=1000000;
    int *a=NULL;
    a= new int[tam];
    for(long int i=0;i<tam;i++){
        a[i]=2;
    }
    cout<<sumaArrayIterativa(a,tam)<<endl;
    cout<<sumaArrayRecursiva(a,tam-1); //La funcion recursiva por temas de memoria aguanta valores menores que 65000
    delete[] a;
    a=NULL;
    return 0;
}
int sumaArrayIterativa(int a[],int tam){
    int sum=0;
    for(int i=0;i<tam;i++){
        sum+=a[i];
    }
    return sum;
}
int sumaArrayRecursiva(int a[],int tam){
    if(tam==0){
        return a[tam];
    }else{
        return a[tam]+sumaArrayRecursiva(a,tam-1);
    }
}