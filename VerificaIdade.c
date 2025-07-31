#include <stdio.h>

int main()
{ 
    int idade, a ,b;

    printf("Digite aqui sua idade:");
    scanf("%d", &idade);

    if ( idade >= 18 )  {
        
        printf("Você é maior de idade\n");

    }
    else {
        printf("Você é menor de idade\n");
    }

    printf("Qual a sua preferência de heróis?\n");
    printf("1 para marvel \n 2 para DC \n 3 para tô nem ai \n");
    scanf("%d", &a);

    if (a==1)
    {
        printf("Seu ingresso custa 20 reais\n");
    }
    
    else if (a==2){
        printf("Seu ingresso custa 20 reais\n");
    }
    else if (a==3) {
    printf("Seu ingresso custa 10 reais\n");
    }
    return 0;
}