/*
 Atividade 22: Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
               aposentar. As condições para aposentadoria são
                  -> Ter pelo menos 65 anos;
                  -> Ou ter trabalhado pelo menos 30 anos;
                  -> Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.
 POR LUÍS H.
*/
#include <stdio.h>

int main()
{
    int idade;
    int tempds; //tempo de serviço de um trabalhador

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Agora digite o tempo de servico de mesmo: ");
    scanf("%d", &tempds);

    if((idade >= 65) || (tempds >= 30) || ((idade >= 60) && (tempds >= 25)))
    {
        printf("PODE APOSENTAR");
    }
    else
    {
        printf("NAO PODE SPOSENTAR\n");
    }
    return 0;
}
