/*. Crear un arreglo de números 20 enteros, y preguntar un número al usuario, el
programa deberá ver si el número ingresado está dentro del arreglo y notificarle al
usuario, caso contrario también notifica que no se encontró.*/
#include <iostream>
using namespace std;
int main()
{
    int numeros[20]; // asignamos la cantidad
    int n = 0;       // numero a comparar
    bool comprobacion = true;
    for (int i = 0; i < 20; i++) // asignamos los numeros que van a estar en el arreglo
    {
        numeros[i] = i + 3;
    }
    cout << "Digite un numero para comparar con el arreglo: ";
    cin >> n;
    for (int i = 0; i < 20; i++)
    {
        if (n == numeros[i])
        {
            comprobacion=true;
            break;
        }
        else
        {
            comprobacion = false;
        }
    }
    if (comprobacion==true)
    {
        cout<<"El numero si se encontro";
    }else{
        cout<<"El numero no se encontro";
    }
    

    return 0;
}