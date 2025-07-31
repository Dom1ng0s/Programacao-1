#include <stdio.h> 


int main()
{

   int a,b;

printf("Digite um numero: "); 
scanf("%d",&a);
printf("digite mais um:");
scanf("%d", &b); 

if (a > b) {

printf("O maior numero e:%d\n", a);
printf("Em ordem crescente e:%d %d\n", b, a);
}else
  {
    
    printf("O maior numero e:%d\n", b);
    printf("Em ordem crescente e::%d %d\n", a, b);

}
// nao tem acento pq meu telado padrao e ingles

}