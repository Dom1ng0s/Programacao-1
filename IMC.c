#include <stdio.h>


int main()
{
    float h,kg, dividir ; 
    
    printf("Digite aqui sua altura em centimetros "),
    scanf("%e",&h);

    printf("Digite aqui seu peso em quilos");
    scanf("%e",&kg);

    dividir = kg  / (h * h) ;
      

printf("O seu IMC e:%e/n",dividir);


      return 0; 
}