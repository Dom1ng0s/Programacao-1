#include <stdio.h>
#include <string.h>

int gabaritadora(char gabarito[10], char respostas[10], int contador, int acertos)
{
    if (contador >= 10) {
        return acertos; 
    }

    if (gabarito[contador] == respostas[contador]) {
        acertos++;  
    }

    return gabaritadora(gabarito, respostas, contador + 1, acertos);  
}

float corretor(char gabarito[10], int acertos, int aprovados, int quantidade, int freq[11])
{
    int aluno;
    char respostas[10];
    scanf("%d", &aluno);

    if (aluno == 9999)
    {
        if (quantidade == 0) 
        {    
            return 0.0;
        }
        return (float) aprovados / quantidade;  
    }

    quantidade++;
    scanf(" %10s", respostas);
    acertos = gabaritadora(gabarito, respostas, 0, 0);  
    freq[acertos]++;
    printf("%d %d.0\n", aluno, acertos);

    if (acertos >= 6) 
    {
        aprovados++;
    }

    return corretor(gabarito, acertos, aprovados, quantidade, freq);
}


int main ()
{
    char gabarito[10];
    float porcentagem;
    scanf(" %10s",gabarito);
    int freq[11] = {0};
    

    porcentagem = corretor(gabarito,0,0,0,freq);
    int moda = 0;
    for (int i = 1; i <= 10; i++)
    {
        if (freq[i] > freq[moda])
        {
            moda = i;
        }
    }
    printf("%.1f%%",porcentagem*100);
    printf("\n%d.0", moda);


}
