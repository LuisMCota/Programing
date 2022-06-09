#include <stdio.h>
using namespace std;

int i, j, k; //Declaramos variables universales de tipo entero.
void pascalito(int n){ // función void para especificar que el puntero es universal

	for (i = 1; i <= n; i++){ // ciclo for para incrementar el numero de lineas de acuerdo al valor ingresado por el usuario.
        int line = 1;
		for (j = 1; j < (n - i + 1); j++){ //ciclo for para imprimir las líneas o vectores en forma triángular.
			printf(" ");
		}

		for (k = 1; k <= i; k++){ // ciclo for para hacer las operaciones entre los números dentro de los vectores.
			printf("%d " , line);
			line = line * (i - k) / k; // se obtiene el coeficiente binomial de cada 
		}
	printf("\n"); // salto de línea entre vectores
	}
}
// esta es una librería con la función del triángulo de pascal, en donde cada linea se va a ir ejecutando por medio de bucles for.

