#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int codigos [10];
char nomes [10][100];
float valores [10];
int estoque [10];
//Lista de produtos pra teste
int presalvo(){
    
  codigos[0] = 1;
  strcpy(nomes[0],"Arroz");
  valores[0] = 10.00;
  estoque[0] = 5;

  codigos[1] = 2;
  strcpy(nomes[1],"Feijão");
  valores[1] = 8.00;
  estoque[1] = 3;

  codigos[2] = 3;
  strcpy(nomes[2],"Macarrão");
  valores[2] = 5.00;
  estoque[2] = 10;

  codigos[3] = 4;
  strcpy(nomes[3],"Óleo");
  valores[3] = 7.00;
  estoque[3] = 2;

  codigos[4] = 5;
  strcpy(nomes[4],"Açúcar");
  valores[4] = 6.00;
  estoque[4] = 8;
  return 0;
}
//CADASTRAR PRODUTOS
int cadastrar(){
int i = 0, e = 0;
do{
    printf("Insira o índice do produto (0 a 9):\n");
    scanf("%d",&i);
    printf("Insira o código do produto:\n");
    scanf("%d",&codigos[i]);
    printf("Insira o nome do produto:\n");
    scanf("%s",nomes[i]);
    printf("Insira o valor do produto:\n");
    scanf("%f",&valores[i]);
    printf("Insira a quantidade em estoque do produto:\n");
    scanf("%d",&estoque[i]);
    printf("Deseja cadastrar outro produto?\n1-Sim\n0-Não\n");
    scanf("%d",&e);
}while (e == 1);
}
//LISTAR PRODUTOS
int listar(){
  for (int i = 0; i < 10; i++)
  {
    if (codigos[i] != 0)
    {
      printf("Código: %d\n",codigos[i]);
      printf("Nome: %s\n",nomes[i]);
      printf("Valor: %.2f\n",valores[i]);
          if (estoque[i] == 0)
    {
      printf("Produto sem estoque\n");
    }
    else
    {
        printf("Estoque: %d\n",estoque[i]);
    }
    }
  }
  
}
//PROCURAR POR CÓDIGO
int procurarporcodigo(){
int codigo, e;
printf("Insira o código do produto:\n");
scanf("%d",&codigo);
for (int i = 0; i < 10; i++)
{
  if (codigos[i] == codigo)
  {
    printf("Código: %d\n",codigos[i]);
    printf("Nome: %s\n",nomes[i]);
    printf("Valor: %.2f\n",valores[i]);
    if (estoque[i] == 0)
    {
      printf("Produto sem estoque\n");
    }
    else
    {
        printf("Estoque: %d\n",estoque[i]);
    }
  }else
  {
    printf("Produto não encontrado, deseja cadastrar o produto?\n1-Sim\n0-Não\n");
    scanf("%d",&e);
    if (e == 1)
    {
      cadastrar();
    }
  }
}
}
// Só pra não me perder, AQUI TA O MAIN
int main(){
    setlocale(LC_ALL, "UTF-8");
int i = 1,e,teste;
printf("Deseja testar com produtos pré-cadastrados? ou cadastrar tudo do zero?\n1-Sim\n0-Não\n");
scanf("%d",&teste);
if (teste == 1)
{
presalvo();
}
while (i == 1)
{
  printf("Escolha uma opção:\n1- Cadastrar produto\n2- Listar produtos\n3- Procurar por código\n4- encerrar as compras\n");
  switch (scanf("%d",&e))
  {
  case 1:
    cadastrar();
    break;
  case 2:
    listar();
    break;
  case 3:
    procurarporcodigo();
    break;
  case 4:
    listar();
    printf("Encerrando as compras...\n");
    break;
  default:
    printf("Opção inválida!\n");
    break;
  }
}
}