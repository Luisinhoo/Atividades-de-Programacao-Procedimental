/*
    Atividade 1: Escreva um programa que:
                 a) Crie/abra um arquivo texto de nome “arq.txt”;
                 b) Permita que o usuário grave diversos caracteres nesse arquivo, até
                    que o usuário entre com o caractere ‘0’;
                 c) Feche o arquivo.
    Por Luís H.
*/
#include <stdio.h>

int main() 
{
    FILE *f;
    char c;

    // a) Crie/abra um arquivo texto de nome "arq.txt"
    f = fopen("arq.txt", "w");
    
    if(f == NULL) 
    {
        printf("Nao foi possivel criar/abrir o arquivo.\n");
        return 1;
    }

    // b) Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre com o caractere '0'
    printf("Digite os caracteres a serem gravados no arquivo (digite 0 para parar): ");

    while(1) 
    {
        scanf(" %c", &c);  //Lê um caractere do usuário (ignora espaços em branco)

        if (c == '0') 
        {
            break;  //Sai do loop se o usuário digitar '0'
        }

        fputc(c, f);  //Grava o caractere no arquivo
    }

    // c) Feche o arquivo
    fclose(f);

    printf("Arquivo gravado com sucesso.\n");
    
    //Abre o arquivo novamente para leitura
    f = fopen("arq.txt", "r");
    if(f == NULL) 
    {
        printf("Nao foi possivel abrir o arquivo.\n");
        return 1;
    }

    printf("Conteudo do arquivo:\n");

    //Lê e exibe os caracteres do arquivo
    while((c = fgetc(f)) != EOF)
    {
        printf("%c", c);
    }
    printf("\n");

    fclose(f);
    return 0;
}
