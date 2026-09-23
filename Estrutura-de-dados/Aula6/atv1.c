#include "cubo.h"
#include "div.h"
#include "mult.h"
#include "soma.h"
#include "sub.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n0, n1, r;
    int e;
    printf("insira 2 numeros:\n");
    scanf("%d", &n0);
    scanf("%d", &n1);
    printf("\nEscolha uma operação\n1 - soma\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n5 - cubo");
    scanf("%d", &e);
    switch (e)
    {
    case 1:
        r = soma(n0, n1);

        break;
    case 2:
        r = sub(n0, n1);

        break;
    case 3:
        r = mult(n0, n1);

        break;
    case 4:
        r = div(n0, n1);

        break;
    case 5:
        r = cubo(n0, n1);

        break;

    default:
        break;
    }
    printf("Resultado:%.2f",r);
}