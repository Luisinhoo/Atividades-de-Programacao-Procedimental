/*
    Atividade 6: Faça um programa que receba do usuário um arquivo texto e mostre na
                 tela quantas vezes cada letra do alfabeto aparece dentro do arquivo.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //Para a utilização das funções isalpha(); e tolower();

int main() 
{ 
    FILE *f;
    char nomeArquivo[100];
    int contadorLetras[26] = {0};  //Array para contar as letras do alfabeto
    int c, i;

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
        if(isalpha(c)) //Verifica se o caractere é uma letra
        {  
            c = tolower(c); //Converte o caractere para minúsculo

            
            contadorLetras[c - 'a']++; //Incrementa o contador da letra correspondente
        }
    }

    fclose(f);

    printf("Ocorrencias de letras no arquivo:\n");
    for(i = 0; i < 26; i++) //Loop para exibir quantas vezes cada letra do alfabeto apareceu
    {
        printf("%c: %d\n", 'a' + i, contadorLetras[i]);
    }

    return 0;
}
