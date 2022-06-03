#include <iostream>
#include <ctime>

using namespace std;
const int col = 11, MAXIMO = 20, row = 11;
int arreglo[ col ][ row ] = { 0 };

   
int main(){

    int i;
    int j;
    srand( time( 0 ) );

    for (int i = 0; i < col; i++ ){
        for (j = 0; j < row; j++){
            arreglo[ i ][ j ]= rand() % MAXIMO;
        }
    }

     cout << "Los valores del arreglo son:" << endl;

    for ( i = 0; i < col; i++ ){
        for (j = 0; j < row; j++){
            cout <<"arreglo[" << i << "]["<<j<<"]= " << arreglo[ i ][ j ];
            cout << "\n";
        }
    }

return 0;
}