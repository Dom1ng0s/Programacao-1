#include <stdio.h>

int main (){

    float entrada;

    scanf("%f",&entrada);

    if (entrada < 0 || entrada > 100){
        printf("Fora de Intervalo\n");
    }
    else if (entrada <= 25){
        printf("Intervalo [0,25]\n");
    }
    else if (entrada <= 50){
        printf("Intervalo (25,50]\n");
    }
    else if (entrada <=75){
        printf("Intervalo (50,75]\n");
    }
    else{
        printf("Intervalo (75,100]\n");
    }
    return 0;
}