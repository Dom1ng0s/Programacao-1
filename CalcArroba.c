#include <stdio.h> 

 int main()
 {
    int a,b,dividir,multiplicar;

    printf("Digite o peso em Kilogramas do seu Bovino:");
    scanf("%d", &a);

    dividir = a / 30;

    printf( " O peso do seu bovino em Arrobas e:%d\n ", dividir);

    printf("insira aqui o valor da arroba do seu bovino:");
    scanf("%d", &b);

    multiplicar = dividir * b;  

    printf("O valor do seu bovino e:%d\n", multiplicar);

    return 0; 

 }