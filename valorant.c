#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m = n;

    int matriz[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int xa, ya;
    scanf("%d %d", &xa, &ya);
    int xn, yn;
    scanf("%d %d", &xn, &yn);

    int kills_a = 0;
    int kills_n = 0;
    int a;

    for (a = 1; xa + a < n; a++) {
        if (matriz[xa + a][ya] == 1) {
            kills_a++;
            matriz[xa + a][ya] = 0;
            break;
        }
    }
    for (a = 1; xa - a >= 0; a++) {
        if (matriz[xa - a][ya] == 1) {
            kills_a++;
            matriz[xa - a][ya] = 0;
            break;
        }
    }
    for (a = 1; ya + a < m; a++) {
        if (matriz[xa][ya + a] == 1) {
            kills_a++;
            matriz[xa][ya + a] = 0;
            break;
        }
    }
    for (a = 1; ya - a >= 0; a++) {
        if (matriz[xa][ya - a] == 1) {
            kills_a++;
            matriz[xa][ya - a] = 0;
            break;
        }
    }
// jogadas de N são diagonais
    for (a = 1; xn + a < n && yn +a <n; a++) {
        if (matriz[xn + a][yn+a] == 1) {
            kills_n++;
            matriz[xn + a][yn+a] = 0;
            break;
        }
    }
    for (a = 1; xn - a >= 0 && yn - a >=0; a++) {
        if (matriz[xn - a][yn -a] == 1) {
            kills_n++;
            matriz[xn - a][yn-a] = 0;
            break;
        }
    }
    
for (a = 1; xn - a >= 0 && yn + a < m; a++) {
    if (matriz[xn - a][yn + a] == 1) {
        kills_n++;
        matriz[xn - a][yn + a] = 0;
        break;
    }
}


for (a = 1; xn + a < n && yn - a >= 0; a++) {
    if (matriz[xn + a][yn - a] == 1) {
        kills_n++;
        matriz[xn + a][yn - a] = 0;
        break;
    }
}

    printf("aziul matou %d\n", kills_a);
    printf("nosredna matou %d\n", kills_n);

    return 0;
}
