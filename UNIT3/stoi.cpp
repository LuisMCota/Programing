/*
KARINA CAMPOS
lUIS MONTERRUBIO
*/
#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main(){
	
	int cols = 2; 
	string** libros;
	int size;
	cout<<"Cuantos libros debe ingresar? \n";
	string entrada; 
	getline(cin, entrada); 
	size = stoi(entrada); 
	libros = new string*[size]; 
	cout<<"Ingrese la siguiente informacion de los libros: \n";
	string titulo,autor;
	
	for(int i=0; i<size; i++){
		
		libros[i] = new string[cols];
		cout<<"\n****** Libro"<<i+1<<"********\n";
		cout<<"titulo: ";
		getline(cin,titulo);
		cout<<"autores: ";
		getline(cin,autor); 
		libros[i][0] = titulo;
		libros[i][1] = autor;
	}

	int posicion ;
	string *direcciondelibro;
	cout << "Escribe el titulo del libro que deseas encontrar: ";
	cin >> posicion;
	direcciondelibro = libros [posicion];

	cout << "El libro seleccionado es  " + *(direcciondelibro) + "  de " +  *(direcciondelibro+1)  << endl ;

	system("pause");
	return 0;
}
 /* cout << str [i][0] << ' ' << *pc <<< */
