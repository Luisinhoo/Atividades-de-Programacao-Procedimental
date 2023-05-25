/*
    Atividade 7: Faça um programa que declare três variáveis do tipo inteiro e três do tipo
                 ponteiro de inteiro apontando para essas variáveis. Utilizando ponteiros, leia
                 três números e os imprima em ordem crescente. O programa deve
                 apresentar também o endereço de memória desses números.
    Por Luís H.
*/
#include <stdio.h>

void ordenarNumeros(int* num1, int* num2, int* num3);
int main() 
{
    int num1, num2, num3;
    int* ptr1, *ptr2, *ptr3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    ordenarNumeros(ptr1, ptr2, ptr3);

    printf("\nNumeros em ordem crescente: %d, %d, %d\n", *ptr1, *ptr2, *ptr3);
    printf("Enderecos de memoria dos numeros: %p, %p, %p\n", ptr1, ptr2, ptr3);

    return 0;
}

void ordenarNumeros(int* num1, int* num2, int* num3) 
{
    int temp;

    if (*num1 > *num2) 
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }

    if (*num2 > *num3) 
    {
        temp = *num2;
        *num2 = *num3;
        *num3 = temp;
    }

    if (*num1 > *num2) 
    {
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
}
