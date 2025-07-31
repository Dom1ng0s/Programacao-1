#include <stdio.h>

int main (){

    int n;

    scanf("%d",&n);

    int array [n];

     for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }

    int menor = array [0];

    for ( int x = 0; x < n; x++){
        if(array[x]<menor){
            menor = array[x];
        }
    }

    for ( int d = 0; d < n ; d++){
        if(array[d] == menor){
            printf("Menor valor: %d \n",menor);
            printf("Posicao: %d",d);
            break;
        }
    }

}