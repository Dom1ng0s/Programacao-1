#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3
#define DANO 15
#define MAX_RODADAS 10

int avalia_golpe(int mat[LIN][COL]) {
    int diag1 = 1, diag2 = 1;
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            int v = mat[i][j];
            if ((i != j && i + j != LIN-1) && v != 0)
                return 0;
            if (i == j && v != 1)
                diag1 = 0;
            if (i + j == LIN-1 && v != 1)
                diag2 = 0;
        }
    }
    if (diag1) return 1;
    if (diag2) return 2;
    return 0;
}

int main(void) {
    int vida_luke, vida_vader;
    if (scanf("%d %d", &vida_luke, &vida_vader) != 2)
        return 0;
    int rodada = 0, mat[LIN][COL];

    while (rodada < MAX_RODADAS) {
        int res_luke, res_vader;

        for (int i = 0; i < LIN; i++)
            for (int j = 0; j < COL; j++)
                if (scanf("%d", &mat[i][j]) != 1)
                    goto fim;
        res_luke = avalia_golpe(mat);

        for (int i = 0; i < LIN; i++)
            for (int j = 0; j < COL; j++)
                if (scanf("%d", &mat[i][j]) != 1)
                    goto fim;
        res_vader = avalia_golpe(mat);

        if (res_luke != 0)
            vida_vader -= DANO;
        if (res_vader != 0)
            vida_luke -= DANO;

        rodada++;
    }
fim:
    if (vida_luke > vida_vader)
        printf("Luke Skywalker venceu.");
    else if (vida_luke < vida_vader)
        printf("Darth Vader venceu.");
    else
        printf("Houve empate.");
    return 0;
}
