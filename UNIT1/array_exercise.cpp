#include <iostream>
#include <stdio.h>

using namespace std;

int main (){

    char letra1[] = {'a','b','c','d','e','f'};
    char letra2[] = {'g','h','i','j','k','l'};
    char letra3[12];

    for (int i = 0; i < 6; i++){
        letra3[i] = letra1[i];
    }

    for (int i = 6; i < 12; i++){
        letra3[i] = letra1[i];
    }
    
    for (int i = 0; i < 12; i++){
        cout << letra3[i] << endl;
    } 
    
}