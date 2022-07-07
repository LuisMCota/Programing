/*
KARINA CAMPOS
lUIS MONTERRUBIO
*/
#include<iostream>
#include<stdio.h>
#include<string>
#include<fstream>

using namespace std;

int cols = 2; 
string** libros;
int size;
int x;


int crear_matrix(){
	cout << "Cuantos libros debe ingresar? \n";
	string entrada; 
	getline(cin, entrada); 
	size = stoi(entrada); 
	libros = new string*[size]; 
}

int rellenarMatriz(){
	cout << "Ingrese la informacion de los libros" << endl;
	string titulo, autor; 
	
	for(int i=0; i<size; i++){
		
		libros[i] = new string[cols];
		cout<<"\n************ Libro "<<i+1<<"************\n";
		cout<<"Title: ";
		getline(cin,titulo);
		cout<<"Autors: ";
		getline(cin,autor); 
		libros[i][0] = titulo;
		libros[i][1] = autor;
	}	
}

int printInfo(){
	
	cout << "Ingrese el libro que desee imprimir:" << endl;
	cin >> x;

	for (int i = 0; i < size; i++){
		cout << libros[i][0] << " " << *libros << " " << libros[i][1] << endl;
	}
}

int main(){
	crear_matrix();
	rellenarMatriz();
	printInfo();
}

int generatefile(){
    fstream new_file;
    new_file.open("new_file_write.txt", ios::out);

    if(!new_file){
        cout << "No such file";
        }else{
            cout << "New file created";
            new_file << "Learning File Handling";
            new_file.close();       
    }
}
