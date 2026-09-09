#include <stdio.h>
#include <stdlib.h>
float media(float p1, float p2, float atv)
{
    float med;
    med = p1 * 0.35 + p2 * 0.35 + atv;
    return med;
}
int main()
{
    float p1, p2, atv, med;
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Insira nota da p%d\n", i + 1);
        if (i == 0)
        {
            scanf("%f", &p1);
        }
        else
        {
            scanf("%f", &p2);
        }
    }
    printf("Informe pontuação das atividades\n");
    scanf("%f", &atv);
    med = media(p1, p2, atv);
    printf("Media do aluno:%.2f\n", med);
    if (media(p1, p2, atv) >= 6)
    {
        printf("Aluno aprovado\n");
    }
    else
    {
        printf("Aluno precisara de sub\n");
        if (p1 < p2)
        {
            printf("Prova substituida:p1\n");
            printf("Nota da sub:");
            scanf("%f", &p1);
        }
        else
        {
            printf("Prova substituida:p2\n");
            printf("Nota da sub:");
            scanf("%f", &p2);
        }
        med = media(p1, p2, atv);
        if (med >= 6)
        {
            printf("Aluno aprovado\n");
        }
        else
        {
            printf("Aluno reprovado\n");
        }
    }
    system("pause");
    return 0;
}