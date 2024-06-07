/*Crear un arreglo con 10 datos, luego multiplicar cada valor por 10 y sustituir su valor
por el resultado.*/
#include<iostream>
using namespace std;
int main(){
    int arreglo[10];//asignamos tamaño
    int resultado[10];//mismo tamaño que el original
    for (int i = 0; i < 10; i++)//pedimos y guardamos los numeros
    {
        cout<<"Introduzca un numero: ";
        cin>>arreglo[i];
    }
    for (int i = 0; i < 10; i++)//transformamos los datos y los guardamos
    {
        resultado[i]=arreglo[i]*10;
    }
    for (int i = 0; i < 10; i++)//imprimimos los datos ya transformados
    {
        cout<<resultado[i]<<"\n";
    }
    

    return 0;
}