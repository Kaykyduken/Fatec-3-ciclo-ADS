#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <string.h>
struct registro
{
    char nome[200];
    char rg[12];
    char cpf[12];
    char cidade[40];
    int id;
    registro *ant;
    registro *pro;
    // armazenara o endereco de memoria onde esta a
    // estrutura anterior
};
// acima defini uma tipo estrutura chamada registro
typedef registro *ponteiro;
// defino um novo tipo, assim se for criado uma variavel do tipo ponteiro
// ele contera todos os campos da estrutura registro
void exibepilha(ponteiro u)
{
    ponteiro aux;
    aux = u;
    while (aux != NULL)
    {
        printf("%s\n", aux->nome);
        printf("%s\n", aux->cidade);
        printf("%d\n", aux->id);
        printf("%s\n", aux->cpf);
        printf("%s\n", aux->rg);
        aux = aux->ant;
    }
}
void Exibefila(ponteiro primeiro)
{
    ponteiro aux;
    aux = primeiro;
    while (aux != NULL)
    {
        printf("%s\n", aux->nome);
        printf("%s\n", aux->cidade);
        printf("%d\n", aux->id);
        printf("%s\n", aux->cpf);
        printf("%s\n", aux->rg);
        aux = aux->pro;
    }
}
int main()
{
    ponteiro ult, seg, aux, inicioFila;
    char nomeb[200];
    char resp = 'S';
    char cpfb[12];
    char cidadeb[40];
    char rgB[12];
    int idb;
    int e;
    // inicializando a pilha
    ult = NULL;
    seg = NULL;
    aux = NULL;
    inicioFila = NULL;
    while (toupper(resp) == 'S')
    {
        printf("\nInforme o nome do cliente: \n");
        scanf("%s", &nomeb);
        printf("\nInforme o id do cliente: \n");
        scanf("%d", &idb);
        printf("\nInforme o cpf do cliente: \n");
        scanf("%s", &cpfb);
        printf("\nInforme o rg do cliente: \n");
        scanf("%s", &rgB);
        printf("\nInforme a cidade do cliente: \n");
        scanf("%s", &cidadeb);
        aux = new registro;
        // crio uma novo registro com todos os atributos
        // eh como se tivesse criado uma linha na tabela
        strcpy(aux->nome, nomeb);
        strcpy(aux->cpf, cpfb);
        strcpy(aux->rg, rgB);
        strcpy(aux->cidade, cidadeb);
        aux->id = idb;
        aux->ant = NULL;
        aux->pro = NULL;
        if (inicioFila == NULL)
        {
            inicioFila = aux;
        }
        else
        {
            ult->pro = aux;
        }
        if (ult != NULL)
        {
            aux->ant = ult;
        }
        if (seg != NULL)
        {
            aux->pro = seg;
        }
        ult = aux;
        printf("Informe S para continuar \n ");
        fflush(stdin);
        scanf(" %c", &resp);
    }
    aux = ult;
    printf("gostaria de exibir como \nPilha(1)\nFila(2)");
    scanf("%d", &e);
    switch (e)
    {
    case 1:

        exibepilha(ult);
        break;
    case 2:
        Exibefila(inicioFila);
        break;

    default:
        break;
    }
}
