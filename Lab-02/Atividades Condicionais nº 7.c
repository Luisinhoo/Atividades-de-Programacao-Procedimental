/*
    Atividade 7: Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
                 forem iguais, imprima a mensagem: “Números iguais”
    Por Luís H.
*/
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Digite um numero qualquer: ");
    scanf("%d", &num1);

    printf("Agora digite um outro numero qualquer: ");
    scanf("%d", &num2);

    if(num1 > num2)
    {
        printf("%d eh maior que %d\n", num1, num2);
    }

    else if(num2 > num1)
    {
        printf("%d eh maior que %d\n", num2, num1);
    }

    else if(num1 == num2)
    {
        printf("\nNumeros iguais\n");
    }
    else
    {	
    	printf("Numeros invalidos!\n");
    
    }
    return 0;
}
