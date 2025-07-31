#include <stdio.h>

int main()
{
    int a,b,c, soma;
    
    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("digite mais um:");
    scanf("%d", &b);
    printf("digite mais um:");
    scanf("%d", &c);
    
    soma = a + b + c;
    
    printf(" A soma dos valores e:%d\n ", soma);
    
    return 0;
    
}