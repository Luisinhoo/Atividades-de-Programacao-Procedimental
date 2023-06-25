/*
    Atividade 4: Faça um programa que receba do usuário um arquivo texto e mostre na
                 tela quantas letras são vogais e quantas são consoantes.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Para a utilização das funçoes tolower() e isalpha();

int main() 
{
    FILE *f;
    char nomeArquivo[100];
    char c;
    int vogais = 0, consoantes = 0;
    
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
        c = tolower(c); //Converte o caractere para minúsculo para comparar com as vogais e consoantes
        
        if(isalpha(c))  //Verifica se o caractere é uma letra
        {
            if((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
            {
                vogais++;
            }
        
            else
            {
                consoantes++;
            }
        }
    }
    
    printf("No arquivo lido, temos %d vogais e %d consoantes\n", vogais, consoantes);
    
    fclose(f);
    return 0;
}
