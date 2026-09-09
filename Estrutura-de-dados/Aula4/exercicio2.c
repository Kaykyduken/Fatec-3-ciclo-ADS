#include <stdio.h>
#include <stdlib.h>
void tabuada(float numero)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
    printf("%.2f X %d=%.2f\n", numero, i , numero * i);    
    }
}
void cubo(float numero) {
    printf("%.2f ao cubo e %.2f",numero, numero*numero*numero);
}
int main()
{
    int e;
    float n;
    printf("Digite um numero:");
    scanf("%f",&n);
    printf("Escolha uma opção\n1:Tabuada ate o 10 \n2:O numero elevado ao cubo\n");
    scanf("%d", &e);
    switch (e)
    {
    case 1:
        tabuada(n);
        break;
    case 2:
        cubo(n);
        break;

    default:
        printf("Entrada invalida\n");
        break;
    }
    return 0;
}
