#include <iostream> //incluímos las librerías
#include "library.h" //incluímos la librería con la función que creamos llamada pascalito.
using namespace std; //namespace for cout


int main(){ 

	int n;

	cout << "Put the number of lines: "; cin >> n; 
    pascalito(n);

return 0;
}
// aquí tenemos la estructura de nuestro código general, en donde se especifica primero el numero de lineas y después 
// mandamos a llamar a la función creada en la librería y finalmente se va a ejecutar dependiendo la entrada del usuario.

