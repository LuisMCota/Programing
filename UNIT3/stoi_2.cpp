#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>


using namespace std;

 const int TOPE = 100;

struct {
    char titulo[50];
    char autor[50];
    int year;
} tlibro[TOPE];
 
int i = 0;
 
//Prototipo de funciones
int menu();
void nuevoRegistro();
 
//Programa principal
int main() {
    int opc;
    opc = menu();
    return 0;
}
 
//funciones
int menu() {
    int opcion;
 
    do {
        cout << "1.-Generar un nuevo registro de libro" << endl;
        cout << "2.-Visualizar todos los registros de libro" << endl;
        cout << "Seleccione una opcion: ";

        cin >> opcion;

        switch (opcion) {
            case 1:
                nuevoRegistro();
            break;
            case 2:
                for (int i = 0; i < 100; i++){
                    tlibro[i];

                    cout << "Tienes: " << tlibro << endl;
                }
                
            break;
            default: printf("Esa opcion no existe\n");
        }
 
    } while (opcion < 2);
 
    return opcion;
 }
 
 void nuevoRegistro() {
    if (i < TOPE) {
        cout << "Proporcione el titulo del libro: ";
        cin >> tlibro[i].titulo; cin.ignore(' ','\n');
        cout << "Nombre del autor: ";
        cin >> tlibro[i].autor; cin.ignore(' ','\n');
        cout << "Ingrese el año de edicion: ";
        cin >> tlibro[i].year ;cin.ignore(' ','\n');
        i++;
    }
    else
        cout << "Lo siento!, el registro esta lleno.";
}



/*int generatefile(){
    fstream new_file;
    new_file.open("new_file_write.txt", ios::out);

    if(!new_file){
        cout << "No such file";
        }else{
            cout << "New file created";
            new_file << "Learning File Handling";
            new_file.close();       
    }
*/

