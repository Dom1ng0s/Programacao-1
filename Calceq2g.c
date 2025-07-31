#include <stdio.h> 
#include <math.h>

 int main()
 { 
    float a, b, c, delta, x, xx;
    

    printf("insira aqui o valor de a");
    scanf("%e", &a);

 printf("insira aqui o valor de b");
    scanf("%e", &b);

printf("insira aqui o valor de c");
    scanf("%e", &c);

    delta = b * b - (4 * a * c );

 if (delta > 0) {
        printf("Delta é positivo (%.2f), existem duas raízes reais distintas.\n", delta);
    } else if (delta == 0) {
        printf("Delta é zero (%.2f), existe uma raiz real única.\n", delta);
    } else {
        printf("Delta é negativo (%.2f), não existem raízes reais, apenas complexas.\n", delta);
    }

     if ( delta < 0 ) {
        return 0;

     } else {

        x = (-b + sqrt(delta)) / 2 * a; 

        xx = (-b - sqrt(delta)) / 2 * a; 



    printf( " O valor das suas raizes é:%.2f é %.2f\n ", x , xx );


return 0;

     }
 }
    