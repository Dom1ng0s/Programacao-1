#include <stdio.h>

int main ()
{
    char frase[101];
    fgets(frase,101,stdin);

    for(int i = 0;frase[i]!= '\0';i++)
    {
        switch (frase[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':   
            frase[i] = '*';
                break;
            
        }

    
}
    printf("%s",frase);
}