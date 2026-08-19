#include <iostream>
using namespace std;

int main()
{
    int dia;
    cout << "Digite o numero do dia da semana (1 a 7): ";
    if (cin >> dia; dia >= 1 && dia <= 7)
    {
        if (dia == 1)
        {
            cout << "Domingo";
        }
        else if (dia == 2)
        {
            cout << "Segunda-feira";
        }
        else if (dia == 3)
        {
            cout << "Terca-feira";
        }
        else if (dia == 4)
        {
            cout << "quarta-feira";
        }
        else if (dia == 5)
        {
            cout << "quinta-feira";
        }
        else if (dia == 6)
        {
            cout << "sexta-feira";
        }
        else if (dia == 7)
        {
            cout << "Sabado";
        }
    }
    else
    {
        cout << "Entrada invalida";
    }
}