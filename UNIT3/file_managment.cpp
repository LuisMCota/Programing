#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    
FILE* ptfichero;
char fin[] = "fin";
char frase[60];

    ptfichero = fopen("User_Registrer.txt", "wt");// creando el archivo de texto
    printf("PROGRAMA PARA ESCRIBIR USUARIOS\n");
    printf("Cuando termine escriba fin \n");

    do{
        puts("\n Escriba una frase");// lo imprime en la terminal
        fgets(frase, sizeof(frase), stdin); // Guarda la frase escrita en el array
        if (strcmp(frase, fin)==0){ // Comparando los arrays para terminar el
            break;
        }    
        fprintf(ptfichero, "%s\n", frase);  
    } while (strcmp(frase, fin)!=0);

    fclose(ptfichero);
    return 0;
}
