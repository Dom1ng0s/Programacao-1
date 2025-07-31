#include <stdio.h>

int menor ( int a, int b , int c )
{
    
    
    int menor = a;

    if(b<menor)
    {
        menor = b;
    }
    
    if (c<menor)
    {  
       menor = c;
    }
    
    return menor;

}



 

int maior ( int a, int b , int c)
{

    int maior = a;

    if(b>maior)
    {
        maior = b;
    }

    if (c>maior)
    {  
       maior = c;
    }
   
    return maior;

}



int main()
{

    int a , b , c, final, com;


    scanf("%d%d%d", &a,&b,&c);

    
   final = menor( a,b,c );

   com = maior( a,b,c);

   if ( com > a && a>final)
   {

    printf("%d %d %d", com , a , final);

   }

   else if ( com > b && b> final)
   {
    printf("%d %d %d", com , b, final);
   }

   else if ( com > c && c> final)
   {
    printf("%d %d %d", com , c , final);
   }


 return 0;


}