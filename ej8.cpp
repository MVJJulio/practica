/*Crear un arreglo con los números del 0 al 99 (utilizando el bucle for), luego imprimirlo
en consola de forma descendente.*/
#include<iostream>
using namespace std;
int main(){
    int arreglo[100];//tamaño 100
    for (int i = 0; i < 100; i++)//guardamos los numeoros del 0 al 99
    {
        arreglo[i]=i;
    }
    for (int i = 99; i >= 0; i--)//imprimimos de forma descendente
    {
        cout<<arreglo[i]<<"\n";
    }
    


    return 0;
}