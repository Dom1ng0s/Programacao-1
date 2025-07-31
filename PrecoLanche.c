#include <stdio.h>

int main(){
    
    int tipo,quantidade;
    float preco = 0;
    scanf("%d %d",&tipo, &quantidade);

    if(tipo == 1)
    {
        preco =(float) quantidade*4;
    }
    else if(tipo == 2)
    {
        preco =(float) quantidade*4.5;
    }
    else if(tipo == 3)
    {
        preco =(float) quantidade*5;
    }
    else if(tipo == 4)
    {
        preco =(float) quantidade*2;
    }
    else if(tipo == 5)
    {
        preco =(float) quantidade*1.5;
    }

    printf("Total: R$ %.2f\n    ",preco);




}