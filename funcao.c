#include <stdio.h>
#include <math.h>

float main ()
{

  float x , y , a , b , c, funcao, afim , quadr , exp , escolha, v0 , v1 ,v2 ,v3 , v4, v5; 

  printf("Escola aqui o tipo da sua função \n Funções disponíveis: Afim, Quadrática, Exponencial \n");
  printf("Afim = 1 \n Quadrática = 2 \n Exponencial = 3 \n"); 
  scanf("%e",&escolha);

  if ( escolha == 1 );
{
     printf("Função Afim escolhida, padrão F(x)= ax+b \n Digite aqui o valor de a ");
     scanf("%e", &a);
    printf("Digite aqui o valor de B: " );
    scanf ("%e", &b);
     // aprender como demonstrar a função em F(x) = A escolhido^x + B escolhido 
      printf("\n");

           v0 = b; 

      printf("O Valor de F(x) quando X é 0 é: %.2f \n", v0);

           v1 = a + b;

      printf("O Valor de F(x) quando X é 1 é: %.2f \n", v1);

           v2 = a*2 + b;

      printf("O Valor de F(x) quando X é 2 é: %.2f \n ", v2);

           v3 = a*3 + b;

      printf("O Valor de F(x) quando X é 3 é: %.2f \n ", v3);

           v4 = a*4 + b ;

      printf("O Valor de F(x) quando X é 4 é: %.2f \n ", v4);

    v5 = a*5 + b;

    printf("O Valor de F(x) quando X é 5 é: %.2f \n", v5);
}

      else if (escolha == 2);
  {   
      printf ("Função Quadrática escolhida, Padrão ax² + bx + c \n Digite aqui o valor de A:");   
      scanf("%e",&a);  
      printf("Digite aqui o valor de B:");
      scanf("%e",&b); 
      printf("Digite aqui o valor de C:");
      scanf("%e",&c);
      
      printf("\n");
      
      v0 = c; 
      
      printf("O Valor de F(x) quando X é 0 é: %.2f \n", v0);
       
      v1 = a + b + c ; 
      
      printf("O Valor de F(x) quando X é 1 é: %.2f \n", v1);
      
      v2 = a*4 + b*2 + c;
      
      printf("O Valor de F(x) quando X é 2 é: %.2f \n", v2);
      
      v3 = a*9 + b*3 + c; 
      
      printf("O Valor de F(x) quando X é 3 é: %.2f \n", v3);
      
      v4 = a*16 + b*4 + c;
      
      printf("O Valor de F(x) quando X é 4 é: %.2f \n", v4);
      
      v5 = a*25 + b*5 + c; 
      
      printf("O Valor de F(x) quando X é 5 é: %.2f \n", v5);
       }



 else if ( escolha == 3 ); 
{












}



}