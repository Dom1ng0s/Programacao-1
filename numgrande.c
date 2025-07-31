#include <stdio.h>
#include <string.h>

#define TAM 10002 // define tamanho maximo 

int main() {
    char M[TAM]; // declara char 1
    char N[TAM]; // declara char 2

    scanf("%s", M); // le char 1
    scanf("%s", N); // le char 2 

    int lenA = strlen(M);  
    int lenB = strlen(N); 

    int lenMax = lenA > lenB ? lenA : lenB; 
    int carry = 0;

    
    char soma[lenMax + 2]; 

    int i;
    for (i = 0; i < lenMax; i++) {
        int digA = (i < lenA) ? M[lenA - i - 1] - '0' : 0; 
        int digB = (i < lenB) ? N[lenB - i - 1] - '0' : 0; 

        int sum = digA + digB + carry;
        soma[i] = (sum % 10) + '0'; 
        carry = sum / 10; 
    }

    if (carry > 0) {
        soma[i] = carry + '0'; 
        i++;
    }

    soma[i] = '\0'; 

    
    for (int j = i - 1; j >= 0; j--) 
    {
        printf("%c", soma[j]);
    }

    return 0;
}