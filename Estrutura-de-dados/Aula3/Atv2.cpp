#include <iostream>
using namespace std;

int main()
{
    int dia;
    cout << "Digite o numero do dia da semana (1 a 7): ";
    cin >> dia;
    switch (dia)
    {
    case 1:
        cout << "Domingo";
        break;
    case 2:
        cout << "segunda-feira";
        break;
    case 3:
        cout << "terca-feira";
        break;
    case 4:
        cout << "quarta-feira";
        break;
    case 5:
        cout << "quinta-feira";
        break;
    case 6:
        cout << "sexta-feira";
        break;
    case 7:
        cout << "Sabado";
        break;

    default:
        break;
    }
}