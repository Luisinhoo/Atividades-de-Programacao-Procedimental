/*
    Atividade 18: Faça um programa que leia um arquivo contendo o nome e o preço de
                  diversos produtos (separados por linha), e calcule o total da compra.
    Por Luís H.
*/
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *file;
    char nome[100];
    float preco, total = 0;
    
    //Abrir o arquivo para leitura
    file = fopen("produtos.txt", "r");
    
    if(file == NULL) 
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }
    
    //Ler o arquivo linha por linha
    while(fscanf(file, "%s %f", nome, &preco) == EOF) 
    {
        printf("Produto: %s\n", nome);
        printf("Preco: R$%.2f\n", preco);
        
        total += preco; // Somar o preço ao total da compra
    }

    fclose(file);
    
    printf("Total da compra: R$%.2f\n", total);
    
    return 0;
}
