/*
Luis Fernando Monterrubio Cota
Karina Campos Almeida
*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int entrada;
int size;

using namespace std;

int main(){

cout << "Cuantos libros desea ingresar?" << endl;
    string entrada;

    getline(cin, entrada);
    size = stoi(entrada);

struct datos{
	char nombre[21];
	int year;
	char autor[21];
}libro[size];

	FILE *fichero;
	int i, numero = 0;

	fichero = fopen("libros.dat", "wt");
	if(fichero == NULL)
		printf("No se pudo encontrar el libro.\n");            
	else{
        for (i=0; i<size; i++){

            puts("NOMBRE: ");
            scanf("%s", &libro[i].nombre);
            fprintf(fichero,"NOMBRE: %s\n", libro[i].nombre);

            puts("AUTOR: ");
            scanf("%s", &libro[i].autor);
            fprintf(fichero,"AUTOR: %s\n", libro[i].autor);

            puts("AÑO: ");
            scanf("%d", &libro[i].year);
            fprintf(fichero,"AÑO: %d\n\n", libro[i].year);
        }
    }
    fclose(fichero);

        fichero = fopen("libros.dat", "rt");
        if(fichero == NULL)
            printf("No se pudo encontrar el libro.\n");
        else{ 
            do{
                puts("Escriba el numero de fichero a leer: \n"
                    "(Para salir, digite 0).");
                scanf("%d", &numero);
                for (i = 0; i < numero; i++){
                    if (i ==(numero-1)){
                        cout<<"\n************ Libro "<<i+1<<" ************\n";
                        printf("NOMBRE: %s\nAUTOR: %s\nAÑO: %d\n\n", 
                            libro[i].nombre, libro[i].autor, libro[i].year);
                        getchar();
                    }
                }
            } 
        while (numero!=0);
            fclose(fichero);
            printf("Hasta luego :)\n");
        }       
return 0;
}