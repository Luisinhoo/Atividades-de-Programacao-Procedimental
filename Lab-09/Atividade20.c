/*
  Atividade 20: Faça um programa que:
                    a) Peça para o usuário entrar com o nome e a posição (coordenadas X e Y) de N cidades e as 
                       armazene em um vetor de estruturas (N é informado pelo usuário);
                    b) Crie uma matriz de distâncias entre cidades de tamanho N x N;
                    c) Calcule as distâncias entre cada duas cidades e armazene na matriz;
                    d) Exiba na tela a matriz de distancias obtida;
                    e) Quando o usuário digitar o número de duas cidades o programa deverá retornar a distância entre elas.
  Por Luís H.
*/
#include <stdio.h>
#include <math.h>

struct Cidade 
{
    char nome[50];
    int x;
    int y;
};

double calcularDistancia(struct Cidade cidade1, struct Cidade cidade2) 
{
    int dx = cidade1.x - cidade2.x;
    int dy = cidade1.y - cidade2.y;
    return sqrt(dx * dx + dy * dy);
}

int main() 
{
    int N;
    double distancia;
    int cidade1, cidade2;
    int i, j;
    
    printf("Digite o numero de cidades: ");
    scanf("%d", &N);
    
    struct Cidade cidades[N];
    
    //Preenchendo as informações das cidades
    for(i = 0; i < N; i++) 
    {
        printf("Digite o nome da cidade %d: ", i + 1);
        scanf("%s", cidades[i].nome);
        printf("Digite a coordenada X da cidade %d: ", i + 1);
        scanf("%d", &cidades[i].x);
        printf("Digite a coordenada Y da cidade %d: ", i + 1);
        scanf("%d", &cidades[i].y);
    }
    
    //Criando e preenchendo a matriz de distâncias
    double distancias[N][N];
    
    for(i = 0; i < N; i++) 
    {
        for(j = 0; j < N; j++) 
        {
            distancias[i][j] = calcularDistancia(cidades[i], cidades[j]);
        }
    }
    
    //Exibindo a matriz de distâncias
    printf("\nMatriz de distancias:\n");
    for(i = 0; i < N; i++) 
    {
        for(j = 0; j < N; j++) 
        {
            printf("%.2lf\t", distancias[i][j]);
        }
        printf("\n");
    }
    
    //Obtendo a distância entre duas cidades
    printf("\nDigite o numero das duas cidades (entre 0 e %d): ", N - 1);
    scanf("%d %d", &cidade1, &cidade2);
    
    if(cidade1 >= 0 && cidade1 < N && cidade2 >= 0 && cidade2 < N) 
    {
        distancia = distancias[cidade1][cidade2];
        printf("A distancia entre %s e %s eh %.2lf\n", cidades[cidade1].nome, cidades[cidade2].nome, distancia);
    } 
    else 
    {
        printf("Cidades invalidas.\n");
    }
    
    return 0;
}
