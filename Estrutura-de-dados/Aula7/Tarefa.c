#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

/*
 * Organização da matriz frase[4][110]:
 *   frase[0] -> frase original
 *   frase[1] -> frase concatenada com "Chuva não"
 *   frase[2] -> frase original com as vogais substituídas
 *   frase[3] -> frase original cifrada
 * As alterações (passos 8 e 10) são feitas a partir da frase original.
 */
// concatenar
void concatenar(char frase[4][110])
{
    char chuva[] = " Chuva não";
    strcpy(frase[1], frase[0]);
    strcat(frase[1], chuva);
}

// contador de palavras
int contarPalavras(char texto[])
{
    int palavras = 0;
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (!isspace((unsigned char) texto[i]) && (i == 0 || isspace((unsigned char) texto[i - 1])))
        {
            palavras++;
        }
    }
    return palavras;
}

// substituir vogais
void substituirVogais(char frase[4][110])
{
    char letra;
    strcpy(frase[2], frase[1]);
    for (int i = 0; frase[2][i] != '\0'; i++)
    {
        letra = tolower((unsigned char) frase[2][i]);
        if (letra == 'a' || letra == 'e' || letra == 'i')
        {
            frase[2][i] = 'b';
        }
        else if (letra == 'o' || letra == 'u')
        {
            frase[2][i] = '3';
        }
    }
}

// cifrar
void cifrar(char frase[4][110])
{
    strcpy(frase[3], frase[2]);
    for (int i = 0; frase[3][i] != '\0'; i++)
    {
        if (i < 5)
        {
            frase[3][i] = frase[3][i] + 3;
        }
        else
        {
            frase[3][i] = frase[3][i] - 5;
        }
    }
}

// main
int main()
{
    setlocale(LC_ALL, "UTF-8");
    char frase[4][110], cacador;
    int contadorv = 0, contadorc = 0;
    printf("Digite 1 frase: ");
    fgets(frase[0], 100, stdin);
    frase[0][strcspn(frase[0], "\n")] = '\0';
    concatenar(frase);
    // contar vogais e consoantes
    for (int i = 0; i < strlen(frase[0]); i++)
    {
        cacador = tolower((unsigned char) frase[0][i]);
        if (cacador == 'a' || cacador == 'e' || cacador == 'i' || cacador == 'o' || cacador == 'u')
        {
            contadorv++;
        }
        else if (cacador >= 'a' && cacador <= 'z')
        {
            contadorc++;
        }
    }
    substituirVogais(frase);
    cifrar(frase);

    printf("Tamanho da frase: %d\n", (int)strlen(frase[0]));
    printf("Quantidade de vogais: %d\n", contadorv);
    printf("Quantidade de consoantes: %d\n", contadorc);
    printf("Quantidade de palavras: %d\n", contarPalavras(frase[0]));
    printf("Frase concatenada: %s\n", frase[1]);
    printf("Frase alterada: %s\n", frase[2]);
    printf("Frase cifrada: %s\n", frase[3]);
    // passo 11: as quatro versões juntas
    printf("\n--- Resumo ---\n");
    printf("Original:    %s\n", frase[0]);
    printf("Concatenada: %s\n", frase[1]);
    printf("Alterada:    %s\n", frase[2]);
    printf("Cifrada:     %s\n", frase[3]);

    printf("\nDanilo isso daqui era pra ser um gerador de senha?\n");
    system("pause");
    return 0;
}