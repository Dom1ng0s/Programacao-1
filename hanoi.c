// escreva uma função recursiva que determine o menor número de jogadas para resolver o Problema da Torre de Hanoi
#include <stdio.h>
#include <math.h>

int hanoi (int pecas)
{
    int resultado;
    // o numero de jogadas minimas e 2^n - 1 

    if (pecas ==1)
    {
        return 2;
    }

    return 2* hanoi(pecas -1);


}


int main ()
{
    int pecas,resultado;
    printf("Insira aqui o numero de peças:");
    scanf("%d",&pecas);

    resultado = hanoi(pecas)-1 ;


    printf("O numero de jogadas minimas é %d",resultado);

return 0;


}