#include <stdio.h>

int main (){
    int array[10];

    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
    }

    // print em ordem inversa

    for (int n = 0; n < 10; n++)
    {
        printf("%d \n",array[9-n]);
    }

}