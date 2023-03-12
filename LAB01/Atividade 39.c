/*
   Atividade 39:  A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo
                  que da quantia total:
                                        - O primeiro ganhador receberá 46%;
                                        - O segundo receberá 32%;
                                        - O terceiro receberá o restante;
                  Calcule e imprima a quantia ganha por cada um dos ganhadores.
   Por Luís H.
*/
#include <stdio.h>

int main()
{
    float pg; //primeiro ganhador
    float sg; //segundo ganhador
    float tg; //terceiro ganhador

 //primeiro ganhador
    pg = 780000.00 * 0.46;

 //segundo ganhador
    sg = 780000.00 * 0.32;

 //terceiro ganhador
    tg = 780000.00 * 0.22;

    printf("O PRIMEIRO ganhador recebe: %.2f\n", pg);

    printf("O SEGUNDO ganhador recebe: %.2f\n", sg);

    printf("O TERCEIRO ganhador recebe: %.2f\n", tg);
    return 0;
}
