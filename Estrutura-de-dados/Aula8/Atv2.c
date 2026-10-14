#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char letras[13];
int posicao;

void Exibe()
{
 for (posicao=0;posicao <13;posicao++)
 {
  printf("Na posicao %i ", posicao);
  printf(" esta o letras: %c \n", letras[posicao]);
 }    
    
}

void Ordena()
{
   int troca;
   int qtdTrocas=0;
   bool valida=false;
   posicao = 0;
   do
   {
     valida=false;
     for (posicao=0; posicao <12;posicao++)
     {
         if (letras[posicao]>letras[posicao+1])
         {
          qtdTrocas++;                                 
          troca = letras[posicao];
          letras[posicao] = letras[posicao+1];          
          letras[posicao+1] = troca;                    
          valida=true;
         }
     }    
   }while (valida == true);
 printf("\n Qtd de trocas %i", qtdTrocas);    
     
}

int main() 
{
 for (posicao=0;posicao <13;posicao++)
 {
  printf("\nInforme o letras da posicao %i ", posicao );
  scanf(" %c",&letras[posicao]);
  letras[posicao] = tolower(letras[posicao]);
}    

 
 
printf("\n *** Exibe desordenado *** \n");
Exibe();
Ordena(); 
printf("\n *** Exibe apos ordenacao *** \n");
Exibe();

 
}
