#include <stdio.h>

int main()
{
    int a,b,c, dividir;
    
    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("digite mais um:");
    scanf("%d", &b);
    
    
    dividir = a / b ;
    
    printf(" ao dividir os valores o resultado e:%d\n ", dividir);
    
    return 0;
    
}