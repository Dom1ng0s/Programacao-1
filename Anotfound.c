#include <stdio.h>
#include <string.h>

void substituidora(char letras[25])
{
    for(int i = 0; letras[i] != '\0'; i++)
    {
        if(letras[i] >= 'a' && letras[i] <= 'z')
        {
            letras[i] = letras[i] - 'a' + 1;
        }
    }
}

void bubbleSort(char letras[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (letras[j] > letras[j+1])
            {
                char temp = letras[j];
                letras[j] = letras[j+1];
                letras[j+1] = temp;
            }
        }
    }
}
void impressora(char letras[],int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", letras[i]); 
    }
}

int verificadora(char letras[], int contador)
{
    if(letras[contador] != contador)
    {
        printf("%d",contador);
        return contador;
    }
    
    verificadora(letras,contador+1);
    return 0;



}
int main()
{
    char letras[25];
    
    scanf("%s", letras);

    substituidora(letras);

    int tamanho = strlen(letras);
    bubbleSort(letras, tamanho);
    // impressora(letras,tamanho);
    verificadora(letras,1);
    
    
    return 0;
}