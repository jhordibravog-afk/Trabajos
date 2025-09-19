#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;
int main(){
    //programa para sacar la mediana de un array
    cout<<" Pragrama para sacar la mediana de un arreglo \n";
    int numeroelementos;
    int arreglito[numeroelementos];
    cout<<"Ingresa el numero de elemntos que va a tener tu arreglo ";
    cin>>numeroelementos;
    for (int i = 0; i < numeroelementos; i++)
    {
        cout<<"Ingrese los elementos para saber su mediana ";
        cin>>arreglito[i];
    }
    cout<<"Los elementos del arreglo son ";
    sort(arreglito, arreglito+numeroelementos);
    for (int j = 0; j < numeroelementos; j++)
    {
        cout<<arreglito[j] <<","<<" ";
    }
    cout<<"\n\n";
    double mediana;
    if (numeroelementos%2!=0)
    {
        cout<<"La medana es "<<arreglito[(numeroelementos-1)/2]<<" ";
    }else
    {
       mediana = (arreglito[((numeroelementos-1) / 2) - 1] + arreglito[numeroelementos / 2]) / 2.0;
       cout<<"La mediana es "<<mediana;
    }
    //Programa para calcular la trnaspuesta de una matriz
    cout<<"Programa para saber la transpuesta de uan matriz \n";
    int matriz[3][3]{
        {1,6,19},
        {34,15,11},
        {3,7,9}
    };
    cout<<"la matriz que tenemos es la siguiente \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cout<<matriz[i][j]<<"\t"; 
        }
     cout<<"\n";   
    }
    cout<<"la transpuesta de la matriz original es\n ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           cout<<matriz[j][i]<<"\t"; 
        }
      cout<<"\n";  
    }
    
    
    
}
