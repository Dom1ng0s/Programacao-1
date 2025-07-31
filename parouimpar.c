 #include<stdio.h>

int main ( )    
{
    int numero, resto;


    printf("Digite aqui seu Número:");
    scanf("%d", &numero);

    resto=numero % 2; 

    // numero / 2  numero % 2 
    
     if (resto ==0)     
     {
        printf("seu número é par");  
     }
     
     else   
     { 
        printf("seu número é ímpar"); 
     }

 


     return 0;

}