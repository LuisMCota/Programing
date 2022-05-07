#include <stdio.h>
#include <math.h>

int main(){

float resultado = 1;
float num, num1, num2;
char operador;

printf("Ingresa operador:");
scanf("%c", &operador);

    int valido = 1;
    switch (operador){
        case '+':
        printf("Ingresa un numero:");
        scanf("%f", &num);
        printf("Ingresa otro numero:");
        scanf("%f", &num2);
        resultado = num + num2;
        break;

        case '-':
        printf("Ingresa un numero:");
        scanf("%f", &num);
        printf("Ingresa otro numero:");
        scanf("%f", &num2);
        resultado = num - num2;
        break;

        case '*':
        printf("Ingresa un numero:");
        scanf("%f", &num);
        printf("Ingresa otro numero:");
        scanf("%f", &num2);
        resultado = num * num2;
        break;

        case '/':
        printf("Ingresa un numero:");
        scanf("%f", &num);
        printf("Ingresa otro numero:");
        scanf("%f", &num2);
        resultado = num / num2;
        break;

        case '^':
        printf("Ingresa un numero:");
        scanf("%f", &num);
        resultado = num * num;
        break;

        

    default: valido = 0;
        
    }
 if (valido)
    printf("Result %f\n", resultado);
else 
    printf("Syntax Error\n");

return 0;
}