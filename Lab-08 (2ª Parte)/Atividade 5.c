/*
    Atividade 5: Elabore um programa que receba duas strings digitadas pelo usuário e
                 verifique se a segunda string ocorre dentro da primeira. Use aritmética de
                 ponteiros para acessar os caracteres das strings.
    Por Luís h.
*/
#include <stdio.h>
#include <stdlib.h>

int stringOcorrencia(const char *str1, const char *str2);
int main() 
{
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);

    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);

    if(stringOcorrencia(str1, str2))
    {
        printf("A segunda string ocorre dentro da primeira.\n");
    }
    else
    {
        printf("A segunda string não ocorre dentro da primeira.\n");
    }

    return 0;
}

int stringOcorrencia(const char *str1, const char *str2) 
{
    const char *p1, *p2, *p3;

    while(*str1) 
    {
        p1 = str1;
        p2 = str2;

        while(*p1 && *p2 && (*p1 == *p2)) 
        {
            p1++;
            p2++;
        }

        if(!*p2)
        {
            return 1;
        }
        str1++;
    }

    return 0;
}
