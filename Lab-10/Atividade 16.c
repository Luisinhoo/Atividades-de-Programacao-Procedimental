/*
    Atividade 16: Faça um programa que recebe um vetor de 10 números, converta cada
                  um desses números para binário e grave a sequência de 0s e 1s em um
                  arquivo texto. Cada número deve ser gravado em uma linha.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

void decimalParaBinario(int numero, char *binario) 
{
    int i = 0;
    int j, k;
    
    if(numero == 0) 
    {
        binario[0] = '0';
        binario[1] = '\0';
        return;
    }

    while(numero > 0) 
    {
        binario[i] = (numero % 2) + '0';
        numero /= 2;
        i++;
    }

    //Inverte a sequência de 0s e 1s
    j = 0;
    k = i - 1;
    char temp;
    
    while(j < k) 
    {
        temp = binario[j];
        binario[j] = binario[k];
        binario[k] = temp;
        j++;
        k--;
    }
    binario[i] = '\0';
}

int main() 
{
    int numeros[10];
    char binario[32];
    char nomeArquivo[100];
    FILE *arquivo;
    int i;
    
    for(i = 0; i < 10; i++) 
    {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "w");
    
    if(arquivo == NULL) 
    {
        printf("Erro ao abrir o arquivo de saida.\n");
        exit(1);
    }

    for(i = 0; i < 10; i++) 
    {
        decimalParaBinario(numeros[i], binario);
        fprintf(arquivo, "%s\n", binario);
    }

    fclose(arquivo);
    printf("Arquivo de saida gerado com sucesso.\n");

    return 0;
}
