/*
  Atividade 47: Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha
  Por Luís H.
*/
#include <stdio.h>

int main()
{
    int dig1; //digito 1
    int dig2; //digito 2
    int dig3; //digito 3
    int dig4; //digito 4
    int arm; //para armazenar os números

    printf("Digite um numero de quatro digitos: ");
    scanf("%d", &arm);

    dig1 = arm / 1000;

    dig2 = (arm % 1000) / 100;

    dig3 = ((arm %1000) % 100) / 10;

    dig4 = (((arm % 1000) % 100) % 10);

    printf("ESSE NUMERO, UM DIGITO POR LINHA, FICA: \n");
    printf("%d\n", dig1);
    printf("%d\n", dig2);
    printf("%d\n", dig3);
    printf("%d\n", dig4);
    return 0;
}
