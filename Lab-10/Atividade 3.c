/*
    Atividade 3: Faça um programa que receba do usuário um arquivo texto e mostre na
                 tela quantas letras são vogais.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Para a utilização da função tolower();

int main() 
{
    FILE *f;
    char nomeArquivo[100];
    char c;
    int vogais = 0;
    
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);
    
    f = fopen(nomeArquivo, "r");
    
    if(f == NULL)
    {
        printf("Arquivo nao aberto!");
        exit(1);
    }
    
    while((c = fgetc(f)) != EOF) 
    {
        c = tolower(c); //Converte o caractere para minúsculo para comparar com as vogais
        
        if((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
        {
            vogais++;
        }
    }
    
    printf("Neste arquivo, temos %d vogais!\n", vogais);
    
    fclose(f);
    return 0;
}
