/*
  Atividade 7: Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
               média.
  POR Luís H.
*/
#include <stdio.h>

int main()
{
    int num, media;
    int i;
    
    for(i = 0; i < 10; i++)
    {
        printf("Digite o %dº numero inteiro qualquer: ", i+1);
        scanf("%d", &num);
    }
    
    //se o numero digitado for maior que 0, ele terá sua media calculada
    if(num > 0)
    {
       media += num / 2; 
       printf("Media = %d\n", media);
    }
    else
    {
        printf("Numeros incorretos!\n");
    }
    return 0;
}
