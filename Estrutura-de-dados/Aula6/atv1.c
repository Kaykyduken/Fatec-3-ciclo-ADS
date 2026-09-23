#include "atv1.h"
int main()
{
  setlocale(LC_ALL, "UTF-8");
  int i = 1, e, teste;
  printf("Deseja testar com produtos pré-cadastrados? ou cadastrar tudo do zero?\n1-Sim\n0-Não\n");
  scanf("%d", &teste);
  if (teste == 1)
  {
    presalvo();
  }
  while (i == 1)
  {
    printf("Escolha uma opção:\n1- Cadastrar produto\n2- Listar produtos\n3- Procurar por código\n4- Realizar Compra\n5- Encerrar Sistema\n");
    scanf("%d", &e);
    switch (e)
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
      compra();
      break;
    case 5:
      listar();
      printf("Encerrando Sistema...\n");
      i = 0;
      break;
    default:
      printf("Opção inválida!\n");
      break;
    }
  }
}
