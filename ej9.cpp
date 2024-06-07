/*Crear un arreglo que permita guardar los nombres de todos los alumnos de una
clase, el programa deberá preguntar cuántos alumnos tiene la clase y en base a eso
deberá pedir todos los nombres. Luego imprimir en consola los nombres con su
respectiva posición en el arreglo.*/
#include<iostream>
using namespace std;
int main(){
    int n=0;//indice de la variable
    cout<<"Ingrese la cantidad de alumnos de la clase: ";
    cin>>n;
    string nombres[n];
    for (int i = 0; i < n; i++)//guardamos los datos
    {
        cout<<"Escriba el nombre del estudiante: ";
        cin>>nombres[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<"El nombre del estudiante es: "<<nombres[i]<<"\n";
    }
    
    
    return 0;
}