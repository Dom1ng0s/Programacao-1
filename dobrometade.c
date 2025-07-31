#include <stdio.h>

int main ()
{
  int num, dob, met;

  scanf("%d",&num);

if( num % 2 == 0)
  {
    printf("O númerp digitado é par \n");

    dob = num * 2;

    met = num / 2;

    printf("o dobro do numero digitado é %d \n", dob);

    printf("o dobro do numero digitado é %d \n", met);
 }
else 
{
    printf("o Número é impar ");
}

return 0; 



}