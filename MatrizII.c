#include <stdio.h>
#include <limits.h> // Para INT_MAX

#define DIM 3

int main() {
    int soma_fora_diag = 0;
    int soma_total = 0;
    int matriz[DIM][DIM];
    int menor = INT_MAX;
    int dividendo;
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            scanf("%d", &matriz[i][j]);
            
            if ( matriz[i][j] > 0)
            {
            
            soma_total += matriz[i][j];
            dividendo++;
            }
            if (i != j && matriz[i][j]) {
                soma_fora_diag += matriz[i][j];
            }

            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    int paridade = (menor % 2 == 0) ? 1 : 0;
    float media =   (float) soma_total / dividendo;

    printf("%.2f %d %d %d", media, menor, paridade, soma_fora_diag);
    return 0;
}