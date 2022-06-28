/*
Karina Campos
Luis Monterrubio 
*/
#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main(){
	
	int cols = 2; //el numero de columnas fijas
	string** libros; //inicializando la matriz con punteros
	int size;
	cout<<"Cuantos libros debe ingresar?" << endl;
	string entrada; //declaro la variable de entrada
	getline(cin, entrada); //se asigna el valor ingresado
	size = stoi(entrada); //transformar la entrada "string" a "entero"
	libros = new string*[size]; //dasignar el numero de filas segun el usuario
	cout<<"Ingrese la siguiente informacion de los libros: " << endl;
	string titulo,autor;
	
	int i, j, position;
	for(i = 0; i < size; i++){

		libros[i] = new string[cols];
		cout<<"\n****** Libro"<<i+1<<"********" << endl;
		cout<<"Titulo: ";
		getline(cin,titulo);
		cout<<"Autores: ";
		getline(cin,autor); //se asigna el valor 
		libros[i][0] = titulo;
		libros[i][1] = autor;
		cout << "Escribe el titulo del libro que deseas encontrar: "; 
		cout << libros[i][0] << " " << *libros << libros[i][1] << "\n";
		
	}

	//liberar la memoria debemos recorrer el array fila pro fila


	system("pause");
	return 0;
}

/*
group assignment: from the previus code, using pointers, you must ask the user which book the print
pointing the data of direction declared
*/

 /* cout << str [i][0] << ' ' << *pc <<< */
