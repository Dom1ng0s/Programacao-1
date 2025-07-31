#include <stdio.h>
#include <math.h>

int verifica_primo(int num, int n) {
    if (num < 2) 
        return 0;

    if (n > sqrt((double)num)) 
        return 1;

    if (num % n == 0) 
        return 0;

    return verifica_primo(num, n + 1);
}

int main() {
    int num, resposta;

    printf("Digite um número: ");
    scanf("%d", &num);

    resposta = verifica_primo(num, 2); 

    if (resposta == 1) 
        printf("%d é primo.\n", num);
    else 
        printf("%d não é primo.\n", num);
    
    return 0;
}