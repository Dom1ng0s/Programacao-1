#include <stdio.h>

int cafe (int num, char tipo, int contador, int total)
{
    scanf("%d",&num);
    scanf(" %c",&tipo);

    if (contador > 7)
    return total;

    if( tipo == 'p'|| tipo == 'P')
    {
        total = total + num *10;
    }
    else 
    {
        total = total + num * 16;
    }

    return cafe(0,tipo,contador +1, total);

}

int main()
{
    int num,contador,total,resposta,capsulas;
    char tipo;
    resposta = cafe(0,tipo,0,0);
    capsulas = resposta * 2/7;

    printf("%d\n%d",resposta,capsulas);
}