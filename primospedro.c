#include <stdio.h>
#include <time.h>
#include <math.h>

int eh_primo(int n, int i)
{
    if(i<n)
    {
        if(n%i == 0)
        {
            return 0;
        }
        else
        {
            return eh_primo(n, i+1);
        }
    }
    else
    {
        return 1;
    }
}

int main()
{
    clock_t c;
    c = clock();
    for(int i = 2; i > 0; i++)
    {
        if(eh_primo(i, 2)) printf("%d ", i);
    }
 return 0;
}