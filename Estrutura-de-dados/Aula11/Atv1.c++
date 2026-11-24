#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

struct ficha
{
  char nome[40];
  int cpf, rg, codigo;
  ficha *proximo;
  // armazenara o endereco de memoria onde estara a
  // apontando para a ficha anterior
  // para estrutura que nos criamos
  // dentro do struct em C++ o ponteiro deve ficar a esquerda
};
// acima defini uma tipo estrutura chamada ficha

typedef ficha *endmem;
// defino um novo tipo, assim se for criado uma variavel do tipo ficha
// ele contera todos os campos da estrutura ficha

void Exibe(endmem primeiro)
{
  endmem aux;
  aux = primeiro;
  while (aux != NULL)
  {
    endmem aux = primeiro;
    int n = 1;

    if (aux == NULL)
    {
      printf("Fila vazia.\n");
      return;
    }
    while (aux != NULL)
    {
      printf("%d) Nome: %s | CPF: %s | RG: %d | Codigo: %d\n",n, aux->nome, aux->cpf, aux->rg, aux->codigo);
      aux = aux->proximo;
      n++;
    }
  }
}

int main()
{
  endmem inicioFila, fichaAnterior, auxiliarFicha;

  int cpf, rg, codigo;
  char cliente[40];
  char resp = 'S';
  // inicializando a fila
  inicioFila = NULL;
  while (resp == 'S' || resp == 's')
  {
    printf("\nInforme o nome do cliente: \n");
    scanf("%s", cliente);
    printf("\nInforme o CPF do cliente: \n");
    scanf("%d", &cpf);
    printf("\nInforme o RG do cliente: \n");
    scanf("%d", &rg);
    printf("\nInforme o codigo do cliente: \n");
    scanf("%d", &codigo);
    auxiliarFicha = new ficha;
    strcpy(auxiliarFicha->nome, cliente);
    auxiliarFicha->cpf = cpf;
    auxiliarFicha->rg = rg;
    auxiliarFicha->codigo = codigo;
    auxiliarFicha->proximo = NULL;
    Exibe(auxiliarFicha);
    if (inicioFila == NULL)
    {
      inicioFila = auxiliarFicha;
    }
    else
    {
      fichaAnterior->proximo = auxiliarFicha;
    }
    fichaAnterior = auxiliarFicha;
    printf("\n--- Fila atual ---\n");
    Exibe(inicioFila);
    printf("\nDeseja apagar o primeiro registro? (S/N): ");
    scanf(" %c", &resp);
    if ((resp == 'S' || resp == 's') && inicioFila != NULL)
    {
      endmem aux = inicioFila;
      inicioFila = inicioFila->proximo;
      delete aux;

      if (inicioFila == NULL) // a fila ficou vazia
        fichaAnterior = NULL;

      printf("\n--- Fila apos remocao ---\n");
      Exibe(inicioFila);
    }
    printf("Informe S para continuar \n ");
    scanf(" %c", &resp);
  }
  Exibe(inicioFila);
  system("pause");
  return 0;
}