#include <stdio.h>

    int escrita (int i, int b)
    {
            int resto;
            resto = i % 7;
        if ( i > 1)
        { 
            if ( resto != 0)
             {
               return escrita(i-1,b);
             }
        
            else
             {
                
               return escrita (i-7, b+1);

             }
        else 
        {
            return b; 
        }
    }       
}
    int main ()
    {
        int a,resposta;

        scanf("%d",&a);

        escrita(a,0) == resposta;
        printf("%d",resposta);

        return 0; 
    }