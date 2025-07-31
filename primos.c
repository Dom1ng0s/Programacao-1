#include <stdio.h>
#include <math.h>
#include <time.h>  

int main() {
    int num = 2; 
    time_t inicio = time(NULL);  

    while (1) 
    { 
        
        if (difftime(time(NULL), inicio) >= 60) 
        {
            break;
        }

        int primo = 1;

        for (int i = 2; i <= sqrt(num); i++) 
        {
            if (num % i == 0) 
            {
                primo = 0; 
                break;
            }
        }

        if (primo) 
        {
            printf("%d\n", num);
        }

        num++; 
    }

    printf("60 segundos se passaram. Fim do programa.\n");
 return 0;
}
