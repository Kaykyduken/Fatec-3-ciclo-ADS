/*Crie um algoritmo onde se insira 12 nomes de times, com seus pontos ganhos e saldo de gols.
Exiba estas informações.
Depois ordene seguindo os seguintes critérios
01)Maior quantidade de pontos ganhos;
02)Caso a quantidade de pontos ganhos for igual de 1 ou mais times o critério de desempate será o time que tiver a maior quantidade de saldo de gols;
03)Exibe a classificação após estas ordenações.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
char nome[12][30], auxnome[30];
int pontos[12], saldo[12], posicao, troca;
bool valida = false;
void nomeartime(int i)
{
    printf("Digite o nome do time: ");
    fgets(nome[i], 30, stdin);
    nome[i][strcspn(nome[i], "\n")] = '\0';
}
void pontosaldo(int i)
{
    printf("Digite os pontos ganhos do time: ");
    scanf("%d", &pontos[i]);
    printf("Digite o saldo de gols do time: ");
    scanf("%d", &saldo[i]);
    getchar();
}
void ordenar(void)
{
    do
    {
        valida = false;
        for (posicao = 0; posicao < 11; posicao++)
        {
            if (pontos[posicao] < pontos[posicao + 1] || (pontos[posicao] == pontos[posicao + 1] && saldo[posicao] < saldo[posicao + 1]))
            {
                troca = pontos[posicao];
                pontos[posicao] = pontos[posicao + 1];
                pontos[posicao + 1] = troca;
                troca = saldo[posicao];
                saldo[posicao] = saldo[posicao + 1];
                saldo[posicao + 1] = troca;
                strcpy(auxnome, nome[posicao]);
                strcpy(nome[posicao], nome[posicao + 1]);
                strcpy(nome[posicao + 1], auxnome);
                valida = true;
            }
        }
    } while (valida == true);
}
void exibe(void)
{
    printf("\nClassificacao dos times:\n");
    for (posicao = 0; posicao < 12; posicao++)
    {
        printf("Time: %s\n", nome[posicao]);
        printf("Pontos: %d\n", pontos[posicao]);
        printf("Saldo de gols: %d\n", saldo[posicao]);
    }
}
int main()
{
    int i;
    for (i = 0; i < 12; i++)
    {
        nomeartime(i);
        pontosaldo(i);
    }
    exibe();
    ordenar();
    exibe();
}