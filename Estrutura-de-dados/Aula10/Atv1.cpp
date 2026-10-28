// Adicionar a struct de produtos
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int posicao, continua;

struct TbProduto
{
    int codigo;
    char nome[40];
    char descricao[40];
    int quantidade;
    float preco;
};

struct TbFicha
{
    int codigo;
    char nome[40];
    char bairro[40];
    char cidade[60];
    char telefone[10];
};
// acima defini uma tipo estrutura chamada TbCliente
struct TbFicha ficha[10];
struct TbProduto produto[10], carrinho[10];
// criei uma matriz de estrutura, assim em cada posicao alimento os 4 atributos

void insereCliente()
{
    printf("Informe um codigo para o cliente: ");
    scanf("%i", &ficha[posicao].codigo);
    printf("Informe o nome do cliente: ");
    fgets(ficha[posicao].nome, 40, stdin);
    printf("Informe o bairro do cliente: ");
    scanf("%s", ficha[posicao].bairro);
    printf("Informe a cidade do cliente: ");
    scanf("%s", ficha[posicao].cidade);
    printf("Informe o telefone");
    scanf("%s", ficha[posicao].telefone);
}
void insereProduto()
{
    printf("Informe um codigo para o produto: ");
    scanf("%i", &produto[posicao].codigo);
    printf("Informe o nome do produto: ");
    fgets(produto[posicao].nome, 40, stdin);
    printf("Informe a descricao do produto: ");
    scanf("%s", produto[posicao].descricao);
    printf("Informe o preco do produto");
    scanf("%f", &produto[posicao].preco);
}

void exibeCliente()
{
    printf("Na posicao digitada estao as informacoes: \n");
    printf("Codigo %i \n", ficha[posicao].codigo);
    printf("Nome %s \n", ficha[posicao].nome);
    printf("Bairro %s \n", ficha[posicao].bairro);
    printf("Cidade %s \n", ficha[posicao].cidade);
    printf("O Telefone eh: %s\n", ficha[posicao].telefone);
}
void exibeProduto()
{
    printf("Na posicao digitada estao as informacoes: \n");
    printf("Codigo %i \n", produto[posicao].codigo);
    printf("Nome %s \n", produto[posicao].nome);
    printf("Descricao %s \n", produto[posicao].descricao);
    printf("Preco %.2f \n", produto[posicao].preco);
}
void registrar()
{
    printf("Voce deseja registrar um cliente ou um produto? (1 para cliente, 2 para produto): ");
    int escolha;
    scanf("%d", &escolha);
    if (escolha == 1)
    {
        do
        {
            printf("Informe uma posicao para guardar o registro: ");
            scanf("%i", &posicao);
            insereCliente();
            printf("Informe 1 para continuar: ");
            scanf("%i", &continua);
            system("cls");
        } while (continua == 1);
    }
    else if (escolha == 2)
    {
        do
        {
            printf("Informe uma posicao para guardar o registro: ");
            scanf("%i", &posicao);
            insereProduto();
            printf("Informe 1 para continuar: ");
            scanf("%i", &continua);
            system("cls");
        } while (continua == 1);
    }
}
void buscar()
{
    printf("Voce deseja buscar um cliente ou um produto? (1 para cliente, 2 para produto): ");
    int escolha;
    scanf("%d", &escolha);
    if (escolha == 1)
    {
        printf("Informe a posicao para busca \n");
        scanf("%i", &posicao);
        exibeCliente();
    }
    else if (escolha == 2)
    {
        printf("Informe a posicao para busca \n");
        scanf("%i", &posicao);
        exibeProduto();
    }
}
void venda()
{
    int vendido;
    printf("Informe a posicao do cliente: ");
    scanf("%i", &posicao);
    exibeCliente();
    printf("Informe a posicao do produto: ");
    scanf("%i", &posicao);
    exibeProduto();
    printf("Informe a quantidade de produtos: ");
    scanf("%i", &vendido);
    if (vendido > produto[posicao].quantidade)
    {
        printf("Nao ha produtos suficientes em estoque. Estoque atual: %i\n", produto[posicao].quantidade);
        return;
    }else
    {
        produto[posicao].quantidade -= vendido;
        carrinho[posicao] = produto[posicao];
    }
    printf("Gostaria de comprar outro produto? (1 para sim, 2 para nao): ");
    int escolha;
    scanf("%i", &escolha);
switch (escolha)
    {
    case 1:
        venda();
        break;
    case 2:
        printf("Compra finalizada.\n");
        break;
    default:
        printf("Opcao invalida.\n");
        break;
    }
}

int main()
{
    printf("1 - Registrar cliente ou produto \n");
    printf("2 - Buscar cliente ou produto \n");
    printf("3 - Iniciar compra \n");
    printf("4 - Sair \n");
    printf("Escolha uma opcao: ");
    int opcao;
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        registrar();
        break;
    case 2:
        buscar();
        break;
    case 3:
        venda();
        break;
    case 4:
        printf("Saindo do programa.\n");
        break;
    default:
        printf("Opcao invalida.\n");
        break;
    }
    system("pause");
}