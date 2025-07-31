#include <stdio.h>

int main() {
    int mat[100][2];
    float valores[100];
    int i = 0;

    
    while (i < 100) {
        int tipo;
        float valor;

        if (scanf("%d", &tipo) != 1 || tipo == -1)
            break;
        if (scanf("%f", &valor) != 1)
            break;

        mat[i][0] = tipo;
        valores[i] = valor;
        i++;
    }

    
    float creditos = 0.0f;
    float debitos  = 0.0f;

    
    for (int j = 0; j < i; j++) {
        
        if (mat[j][0] == 1) {
            creditos += valores[j];
        }
        else if (mat[j][0] == 0) {
            debitos += valores[j];
        }
    }

    
    printf("Creditos: R$ %.2f\n", creditos);
    printf("Debitos: R$ %.2f\n", debitos);
    printf("Saldo: R$ %.2f\n", creditos - debitos);

    return 0;
}



