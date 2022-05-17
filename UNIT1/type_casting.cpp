#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
    float f = 33.50;
    double y = 4332.98;
    int z = 28;

    printf("The float value: %f \n", f);
    printf("The double value: %f \n", y);
    printf("The sum of float, double and int variable: %f\n", (f + y + z));

    return 0;
}