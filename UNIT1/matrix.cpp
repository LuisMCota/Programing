#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int num[100][100], filas, columnas;

    cout << "Digite el numero de filas: " << endl;
    cin >> filas;
    cout << "Digite el numero de columnas: " << endl;
    cin >> columnas;

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << "Digite un numero ["<<i<<"]["<<j<<"]";
            cin >> num[i][j];
        }
        cout << "\n";
    }
    
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << num[i][j];
        }
        cout << "\n";  
    }
    return 0;
}