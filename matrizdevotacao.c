#include <stdio.h>
#include <stdlib.h>


int main() {
    int princesas, eleitores;
    if (scanf("%d %d", &princesas, &eleitores) != 2) return 1;

    
    int matriz[eleitores][princesas];

   
    for (int i = 0; i < eleitores; i++) {
        for (int j = 0; j < princesas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    
    for (int i = 0; i < eleitores; i++) {
        for (int j = 0; j < princesas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < princesas; i++) {
        int votos = 0;
        for (int j = 0; j < eleitores; j++) {
            if (matriz[j][i] == 1) {
                votos++;
            }
        }
        printf("Princesa %d: %d votos\n", i + 1, votos);
    }
    
    return 0;
}
