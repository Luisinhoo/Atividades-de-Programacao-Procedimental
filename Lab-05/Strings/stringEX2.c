/*
  	STRINGS
    Atividade 2: Faça  um  programa  que  conte  o  número  de 1’s que aparecem  em  uma  string.  Exemplo:		
			“0011001” -> 3
    POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    char str[100];
    int i, contador = 0;
    printf("Digite uma strings: ");
    fgets(str, 100, stdin);
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '1')
        {
            contador++;
        }
    }
    printf("A string tem %d 1's\n", contador);
    return 0;
}

