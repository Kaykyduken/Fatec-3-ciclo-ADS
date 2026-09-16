#include <stdio.h>
#include <stdlib.h>
int fsoma(int n1, int n2)
{
    int resultado = n1 + n2 + 10;
    return resultado;
}
int fmult(int rsoma, int n3)
{
    int rmult;
    rmult = (rsoma + n3) * 3;
    return rmult;
}
int fcubo(int rmult)
{
    int rcubo;
    rcubo = rmult * rmult * rmult;
    return rcubo;
}
int main()
{
    int n1, n2, n3;
    int r1, r2, r3;
    printf("insira 3 numeros inteiros\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    r1 = fsoma(n1, n2);
    r2 = fmult(r1, n3);
    r3 = fcubo(r2);
    printf("Resultado da função soma:%d\n", r1);
    printf("Resultado da função mult:%d\n", r2);
    printf("Resultado da função cubo:%d\n", r3);
    system("pause");
    return 0;
}