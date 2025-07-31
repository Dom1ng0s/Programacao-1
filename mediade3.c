    #include <stdio.h>

    int main ()
    {
        int a,b,c; 
        double media;

        printf("Insira aqui o valor do primeiro numero:");
        scanf("%d", &a);

        printf("Insira aqui o valor do segundo numero:");
        scanf("%d", &b);

        printf("Insira aqui o valor do terceiro numero:");
        scanf("%d", &c);

        media = (a + b + c) / 3.0; 


        printf("O valor da media dos 3 valores é: %.2lf",media);

        return 0;
    }




