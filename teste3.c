#include <stdio.h>

int main()
{
    int a,b,c, produto;
    
    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("digite mais um:");
    scanf("%d", &b);
    printf("digite mais um:");
    scanf("%d", &c);
    
    produto = a * b * c;
    
    printf(" O produto dos valores e:%d\n ", produto);
    
    return 0;
    
}