#include <stdio.h>

int main()
{
    int ano, idade;
    char resp;

    printf("Qual o ano de seu nascimento?\n");
    scanf("%d",&ano);
    printf("Voce ja fez aniversario esse ano?\n s para sim \n n para nao\n");
    scanf(" %c",&resp);
    if(resp == 'S' || resp == 's')
    {
        idade = 2025 - ano;
    }
    else if (resp == 'N' || resp == 'n')
    {
        idade = 2024 - ano;
    }
    else 
    {
        printf("resposta invalida");
    }
    printf("Sua Idade e: %d\n",idade);
    return 0;
}