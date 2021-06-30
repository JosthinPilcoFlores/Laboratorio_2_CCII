#include <iostream>
using namespace std;
void intercambia(int[],int);
void intercambiaRecursiva(int[],int);
int main(){
    int *a=NULL,tam=9;
    a= new int[tam];
    for(int i=0;i<tam;i++){
        a[i]=i+1;
    }
    intercambia(a,tam);
    for(int i=0;i<tam;i++){
        cout<<a[i]<<" ";
    }
    intercambiaRecursiva(a,tam);
    cout<<endl;
    for(int i=0;i<tam;i++){
        cout<<a[i]<<" ";
    }
    delete[] a;
    a=NULL;
    return 0;
}
void intercambia(int a[],int tam){
    int temp;
    if(tam%2==0){
        for(int i=0;i<tam;i++){
            if(i%2==0){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }else{
        for(int i=0;i<tam-1;i++){
            if(i%2==0){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}
void intercambiaRecursiva(int a[],int tam){
    int temp,t=tam-1;
    if(t%2!=0){
        if(tam==0){
        }else{
            temp=a[t];
            a[t]=a[t-1];
            a[t-1]=temp;
            intercambiaRecursiva(a,tam-2);
        }
    }else{
        if(tam==1){
        }else{
            temp=a[t-1];
            a[t-1]=a[t-2];
            a[t-2]=temp;
            intercambiaRecursiva(a,tam-2);
        }
    }
}