#include <stdio.h>

int main (){

    int matriz[3][3]; // matriz[i][j]

    for( int i=0; i < 3; i++)
    {
        for(int j=0; j <3; j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }

    int soma = 0;

    for( int i=0; i < 3; i++)
    {
        for(int j=0; j <3; j++)
        {
            if(i +j == 2)
            {
                soma += matriz[i][j];
            }
        }
    }
    printf("Soma da diagonal secundaria: %d\n",soma);
    return 0;
    
}