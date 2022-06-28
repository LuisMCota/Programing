/*
KARINA CAMPOS
LUIS MONTERRUBIO
*/
#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int cols = 2; //el numero de columnas fijas
int main(){
	
	string** libros; //inicializando la matriz con punteros
	string entrada; //declaro la variable de entrada
	string titulo,autor;
	int size = stoi(entrada);
	libros = new string*[size]; //dasignar el numero de filas segun el usuario

	cout<<"Cuantos libros debe ingresar? \n";
	getline(cin, entrada); //se asigna el valor ingresado
	cout<<"Ingrese la siguiente informacion de los libros: \n";
	
	for(int i=0; i<size; i++){
		
		libros[i] = new string[cols];
		cout<<"\n****** Libro"<<i+1<<"********\n";
		cout<<"titulo: ";
		getline(cin,titulo);
		cout<<"autores: ";
		getline(cin,autor); //se asigna el valor 
		libros[i][0] = titulo;
		libros[i][1] = autor;

		int position;
		cout << "Que libro desea encontrar? " << endl;
		cin >> position;
		for (int i = 0; i < size; i++){
			cout << titulo;
		}
	}
	/*encontrar libro en base a la posicion con punteros*/
	system("pause");
	return 0;
}

 /* cout << str [i][0] << ' ' << *pc <<< */
