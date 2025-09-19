#include<iostream>
#include<string>
#include <algorithm> 
    #include <vector>
using namespace std;
int main(){
    //Programa para sacar inventario
    cout<<"Programa inventario\n";
     vector<string>prodructos;
     vector<int>cantidades;
     vector<float>precios;
     int opcion;
   do
   {
    cout<<"0==========MENÚ DEL PROGRAMA==========0\n";
    cout<<"1. Anadir al inventario\n";
    cout<<"2. Mostrar inventario\n";
    cout<<"3. Salir\n";
    cout<<"Ingresa la opcion a elegir\n";
    cin>>opcion;
    cin.ignore();
    switch (opcion)
    {
    case 1:{
        string prodructo;
        int cantidad;
        float precio;
        cout<<"Ingrese el nombre del producto: ";
        getline(cin,prodructo);
        cout<<"Ingrese la cantidad de producto: ";
        cin>>cantidad;
        cout<<"Ingrese el precio del producto: ";
        cin>>precio;
        prodructos.push_back(prodructo);
        cantidades.push_back(cantidad);
        precios.push_back(precio);
        break;
    }
    case 2:{
        for (size_t i = 0; i < prodructos.size(); i++)
        {
            cout<<i+1<<".Producto: "<<prodructos[i]<<"\n"<<"Cantidad: "<<cantidades[i]<<"\n"<<"Precio: "<<precios[i]<<"\n";
        }
        if (prodructos.empty())
        {
            cout<<"Inventario vacio, por favor ingrse primero un producto\n";
        }
        break;
    }
    case 3:{
        cout<<"fin\n";
        break;
    }
    default:
        cout<<"Ingrese un valor valido\n ";
        break;
    }
   } while (opcion!=3);
   return 0;
   
     

}