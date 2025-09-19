#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;

int main(){
    //Programa para ordenar elementos de un arreglo
    cout<<"Programa para ordenar los elementos de un array segun la necesidad del usuario\n";
    
    int numeroelementos;
    cout<<"Ingresa el numero de elementos que va a tener tu arreglo ";
    cin>>numeroelementos;

    int arreglito[numeroelementos]; // ahora sí después de leer numeroelementos
    
    for (int i = 0; i < numeroelementos; i++)
    {
        cout<<"Ingrese los elementos con los que va a contar su arreglo ";
        cin>>arreglito[i];
    }

    cout<<"Los elementos del arreglo son ";
    sort(arreglito, arreglito+numeroelementos);
    for (int j = 0; j < numeroelementos; j++)
    {
        cout<<arreglito[j] <<" ";
    }

    int opcion;
    cout<<"\n\n";
    do
    {
        cout<<"=====Menu del array======\n";
        cout<<"1. ordenar de menor a mayor\n";
        cout<<"2. ordenar de mayor a menor\n";
        cout<<"3. Salir\n";
        cout<<"Ingrese la opcion\n";
        cin>>opcion;
        cin.ignore();

        switch (opcion)
        {
        case 1:{
            sort(arreglito, arreglito+numeroelementos);
            for (int i = 0; i < numeroelementos; i++)
            {
                cout<<arreglito[i]<<" ";
            }
            cout<<"\n";
            break;
        }
        case 2:{
            sort(arreglito, arreglito+numeroelementos, greater<int>());
            for (int i = 0; i < numeroelementos; i++)
            {
                cout<<arreglito[i]<<" ";
            }
            cout<<"\n";
            break;
        }
        case 3:{
            cout<<"Gracias por utilizar el programa\n";
            break; // agregado
        }
        default:
            cout<<"Opcion no valida\n";
            break;
        }
    } while (opcion!=3);
}
