
#include<stdio.h>
#include<string.h>

int main(){
	
	struct datos{
		char nombre[21];
		int edad;
		char ciudad[21];
	}persona;
	
	FILE *fichero;
	int i;
	
	fichero = fopen("gente.dat", "wt");
	if(fichero == NULL){
		printf("No se pudo encontrar el archivo.\n");
	}else{
		puts("Nombre: ");
		gets(persona.nombre);
		fprintf(fichero, "%s\t", persona.nombre);
		
		puts("Edad: ");
		scanf("%d", &persona.edad);
		getchar();
		fprintf(fichero, "%d\t", persona.edad);
		
		puts("Ciudad: ");
		gets(persona.ciudad);
		fputs(persona.ciudad, fichero);
		fclose(fichero);
	}
	fichero = fopen("gente.dat", "rt");
	if(fichero == NULL){
		printf("No se pudo abrir el archivo.\n");
	}else{
		while(!feof(fichero)){
			fgets(persona.nombre, 60, fichero);
			puts(persona.nombre);
			fscanf(fichero, "%d", &persona.edad);
			getchar();
			printf("%d", persona.edad);
			fgets(persona.ciudad, 60, fichero);
			puts(persona.ciudad);
		}
		fclose(fichero);
	}
	return 0;
}