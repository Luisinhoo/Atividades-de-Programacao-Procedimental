/*
     Atividade 44: Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo
               	   a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.
     Por Luís H.
*/
#include <stdio.h>

int main()
{
    float altdesc; //altura do degrau de uma escada
    float altudesc; //altura que o usuário deseja alcançar subindo a escada

    int resultado;

    printf("Digite a altura do degrau da escada: ");
    scanf("%f", &altdesc);

    printf("Agora digite a altura que deseja alcançar subindo nela: ");
    scanf("%f", &altudesc);

    resultado = (altdesc * 100) / altudesc;

    printf("Deve-se subir %d degraus para alcançar o objetivo\n", resultado);
    return 0;
}
