#include <stdio.h>
#include <stdlib.h>
int numero[13];
int posicao;

void Exibe()
{
  for (posicao = 0; posicao < 13; posicao++)
  {
    printf("Na posicao %i ", posicao);
    printf(" esta o numero: %i \n", numero[posicao]);
  }
}
void Ordena()
{
  int troca;
  int qtdTrocas = 0;
  bool valida = false;
  posicao = 0;
  do
  {
    valida = false;
    for (posicao = 0; posicao < 12; posicao++)
    {
      if (numero[posicao] > numero[posicao + 1])
      {
        qtdTrocas++;
        troca = numero[posicao];
        numero[posicao] = numero[posicao + 1];
        numero[posicao + 1] = troca;
        valida = true;
      }
    }
  } while (valida == true);
  printf("\n Qtd de trocas %i", qtdTrocas);
}
void busca(int buscaNum)
{
  bool achou = false;
  int inicio, meio, fim;

  inicio = 0;
  fim = 10 - 1; // final do vetor menos 1 porque a posicao no c comeca no zero
  meio = (inicio + fim) / 2;
  while (inicio <= fim && achou == false)
  {
    meio = (inicio + fim) / 2;
    if (buscaNum > numero[meio])
    {
      inicio = meio + 1;
    }
    else if (buscaNum < numero[meio])
    {
      fim = meio - 1;
    }
    else
    {
      achou = true;
    }
  }
  printf("Meio %i\n", meio);
  printf("Inicio %i\n", inicio);
  printf("Fim %i\n", fim);

  if (achou == true)
  {
    printf("\n ***Informacao encontrada na posicao*** %i\n ", meio);
  }
  else
  {
    printf("\n ***Informacao nao encontrada *** \n ");
  }
}

int main()
{
  int num;
  
  for (posicao = 0; posicao < 13; posicao++){
    printf("\nInforme o numero da posicao %i ", posicao);
    scanf("%i", &numero[posicao]);
  }
  printf("\n *** Exibe desordenado *** \n");
  Exibe();
  Ordena();
  printf("\n *** Exibe apos ordenacao *** \n");
  Exibe();
  printf("Informe um numero: ");
  scanf("%i", &num);
  busca(num);
  system("pause");
}
