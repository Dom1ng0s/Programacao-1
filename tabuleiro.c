#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void print_debug(int *matriz, int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matriz[i * m + j]);
        }
        printf("\n");
    }
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int matriz[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            
            scanf("%d", &matriz[i][j]);
        }
    }
    print_debug(matriz, n, m);

    

}