#include <stdio.h>

int main (){
    int array [10];

    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
        if (array[i] <=0){
            array[i] = 1;
        }
        
    }
    for(int n = 0; n < 10; n++)
    {
        printf("X[%d] = %d \n", n, array[n]);
    }
    return 0;
}