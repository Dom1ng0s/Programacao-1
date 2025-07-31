#include <stdio.h>


int main(){
    char palavra[51];
    int contador = 0;

    scanf("%s",palavra);

    for(int i = 0; palavra[i] != '\0'; i++)
    {
        switch (palavra[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            contador++;
            break;

    }
    
}
    printf("%d",contador);
}
