#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[200];
    int i, j;

    printf("Escreva uma frase: ");
    fgets(str, 200, stdin);

    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == 'R' || str[i] == 'r') 
        {
            if(str[i + 1] != '\n' && str[i + 1] != ' ' && str[i + 1] != 'R' && str[i + 1] != 'r')
            {
                if(str[i] == 'R') 
                {
                    str[i]='L';
                }
                else if(str[i] == 'r')
                {
                    str[i]='l';
                }
            }
        
            else if(str[i + 1] == '\n' || str[i+ 1] == ' ') 
            {
                str[i] = str[i];
            }
            else if(str[i + 1] == 'R' || str[i + 1] == 'r') 
            {
                if(str[i + 1] == 'R') 
                {
                    str[i]='L';
                }
                else if(str[i +1] == 'r')
                {
                    str[i]='l';
                }
                
                for(j = i; str[j] != '\0'; j++) 
                {
                    str[j+ 1] = str[j + 2];
                }
            }
        }
    }
    

    printf("Essa frase, com a dislelia, fica:\n%s\n", str);

    return 0;
}

