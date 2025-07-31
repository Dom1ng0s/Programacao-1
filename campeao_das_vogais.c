#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char dicionario [n][51];
    int contador[n] ;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s",dicionario [i]);
        contador[i] = 0;
            for(int z = 0; dicionario[i][z] != '\0'; z++)
        {
            switch (dicionario[i][z]) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                contador[i]++;
                break;
            }

        }
    }
    int maior = 0;
    for(int x = 0; x <n ; x++)
    {
        if(contador[x]>contador[maior])
        {
            maior = x;
        }
    }
    printf("%s\n", dicionario[maior]);
    return 0;
}