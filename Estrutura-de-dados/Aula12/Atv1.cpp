#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
struct registro
{
  char nome[200];
  char rg[10];
  char cpf[11];
  char cidade[40];
  int id;
  registro *ant;
  // armazenara o endereco de memoria onde esta a
  // estrutura anterior
};
// acima defini uma tipo estrutura chamada registro
typedef registro *ponteiro;
// defino um novo tipo, assim se for criado uma variavel do tipo ponteiro
// ele contera todos os campos da estrutura registro
void exibe(ponteiro u)
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

int main()
{
  ponteiro ult, aux;
  char nomeb[200];
  char resp = 'S';
  char cpfb[11];
  char cidadeb[40];
  char rgB[10];
  int idb;
  // inicializando a pilha
  ult = NULL;
  aux = NULL;

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
    aux->id == idb;
    aux->ant = NULL;
    if (ult != NULL)
    {
      aux->ant = ult;
    }
    ult = aux;
    printf("Informe S para continuar \n ");
    fflush(stdin);
    scanf("%c", &resp);
  }
  aux = ult;
  exibe(ult);
  system("pause");
}
