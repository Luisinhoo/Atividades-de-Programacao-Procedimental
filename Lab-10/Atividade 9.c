/*
    Atividade 9: Faça um programa que receba dois arquivos do usuário, e crie um
                 terceiro arquivo com o conteúdo dos dois primeiros juntos (o conteúdo
                 do primeiro seguido do conteúdo do segundo).
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *arq1;
    FILE *arq2;
    FILE *arq3;
    char nomeArq1[100], nomeArq2[100], nomeArq3[100];
    char c;
    
    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", nomeArq1);
    
    printf("Agora digite o nome do segundo arquiv: ");
    scanf("%s", nomeArq2);
    
    printf("Por fim, digite o nome do terceiro arquivo: ");
    scanf("%s", nomeArq3);
    
    arq1 = fopen(nomeArq1, "r");
    
    if(arq1 == NULL)
    {
        printf("Nao foi possivel abrir o arquivo de entrada.\n");
        exit(1);
    }
    
    arq2 = fopen(nomeArq2, "r");
    
    if(arq2 == NULL)
    {
        printf("Nao foi possivel abrir o arquivo de entrada.\n");
        exit(1);
    }
    
    arq3 = fopen(nomeArq3, "w");
    
    if(arq3 == NULL)
    {
        printf("Nao foi possivel criar o arquivo de saida.\n");
        fclose(arq1);
        fclose(arq2);
        exit(1);
    }
    
    //Copiando o conteúdo do primeiro arquivo para o terceiro arquivo
    while((c = fgetc(arq1)) != EOF) 
    {
        fputc(c, arq3);
    }
    
    //Copiando o conteúdo do segundo arquivo para o terceiro arquivo
    while((c = fgetc(arq2)) != EOF) 
    {
        fputc(c, arq3);
    }
    
    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
    
    printf("Arquivo criado com sucesso!");
    return 0;
}
