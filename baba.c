#include <stdio.h>

int main() {
    float a, multiplicar, somar; 

    
    scanf("%e", &a);

    if (a > 500) {
        multiplicar =(a * 0.1);

    
        somar = a + multiplicar;

        printf("%.2lf\n", somar);
    } 
    else if (a > 300) {  
        multiplicar =(a * 0.07);


       somar = a + multiplicar;

        
        printf("%.2lf\n", somar);
    } 
    else {  
        multiplicar =(a * 0.05);

       somar = a + multiplicar;

        printf("%.2lf\n", somar);
    }

    return 0;
}







