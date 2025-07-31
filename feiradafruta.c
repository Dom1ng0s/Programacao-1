#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

int feira(int contador, int total, int frutas, int limite) {

    if ( contador >= limite)
    {
        return 0;
    }
    int gasto;
    printf("Digite o gasto: ");
    scanf("%d", &gasto);

    total+= gasto;
    
    
    getchar();  

    char frase[100];

    
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    
    frase[strcspn(frase, "\n")] = 0;

    
    for (int i = 0; frase[i] != '\0'; i++) {
        printf("Caractere %d: %c\n", i, frase[i]);

            if( frase[i] == ' ')
            {
                frutas++;
            }
    }

    return 0;  
}


int main ()
{
    int limite;
    scanf("%d",&limite);
    feira(0,0,0,limite);




}