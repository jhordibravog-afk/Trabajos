#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el numero de elementos del arreglo: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Ingrese los elementos: ";
        cin >> arr[i];
    }
    cout << "\nElementos duplicados en el arreglo:\n";
    bool hayDuplicados = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                hayDuplicados = true;
                break;
            }
        }
    }
    if (!hayDuplicados) {
        cout << "No hay elementos duplicados";
    }

    cout <<"\n\n";
    return 0;
}
