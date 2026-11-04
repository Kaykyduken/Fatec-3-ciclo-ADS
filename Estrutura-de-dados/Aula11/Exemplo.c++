#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>


struct ficha
{
  char nome[40];
  ficha *proximo;
  //armazenara o endereco de memoria onde estara a
  //apontando para a ficha anterior
  //para estrutura que nos criamos
  //o asterisco deve ser colocado do lado direito
} ;
//acima defini uma tipo estrutura chamada ficha

typedef ficha* endmem;
//defino um novo tipo, assim se for criado uma variavel do tipo ficha
//ele contera todos os campos da estrutura ficha

    
void Exibe(endmem primeiro)
{
 endmem aux;
 aux = primeiro;
 while (aux != NULL)
  {
    printf("%s\n", aux->nome);
    aux=aux->proximo;
  }
}

int main()
{
endmem inicioFila, fichaAnterior, auxiliarFicha;
char cliente[40];
char resp='S';
//inicializando a fila
inicioFila = NULL;
while (resp== 'S')
{
   printf("\nInforme o nome do cliente: \n");
   scanf("%s", cliente);
   auxiliarFicha = new ficha;
   strcpy(auxiliarFicha->nome,cliente);
   auxiliarFicha->proximo = NULL;
      if (inicioFila == NULL)
      {
         inicioFila = auxiliarFicha;
         }
      else
      {
        fichaAnterior->proximo = auxiliarFicha;
        }
      fichaAnterior = auxiliarFicha;
   printf("Informe S para continuar \n ");
 
 
   scanf("%s", &resp);
}
Exibe(inicioFila);
system("pause");
}