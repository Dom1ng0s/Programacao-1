#include <stdio.h>

int main(){
    char palavra[51];
    int comprimento = 0;

    scanf("%s",palavra);

    for(int i = 0; i < 51; i++){
        if(palavra[i] != '\0')
        {
            comprimento += 1;
        }
        else 
        {
            break;
        }
    }

    printf("%d",comprimento);
    return 0;
}