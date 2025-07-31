#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int fatorial (int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n-1);
    }
}

int main()
{
    int num;
    
    scanf("%d",&num);
    printf("%d",fatorial(num));
    
    
    
	return 0;
}
