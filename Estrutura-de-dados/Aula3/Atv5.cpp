#include <iostream>
using namespace std;
int main()
{
    float n0, n1, n2, m;

    string nome;
    cout << "Insira o nome do aluno\nNome:";
    cin >> nome;
    cout << "Insira 3 notas do aluno\n";
    cin >> n0;
    cin >> n1;
    cin >> n2;
    m = (n0 + n1 + n2) / 3;
    if (m >= 6)
    {
        cout << "Aprovado";
    }
    else
    {
        cout << "Reprovado";
    }
}