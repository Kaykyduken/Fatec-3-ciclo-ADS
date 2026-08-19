#include <iostream>
using namespace std;
int main(void)
{
    float l0, l1, l2;
    cout << "Insira os 3 lados do triangulo\nLado 1:";
    cin >> l0;
    cout << "Lado 2:";
    cin >> l1;
    cout << "Lado 3:";
    cin >> l2;
    if (l0 == l1 && l1 == l2)
    {
        cout << "Seu Triangulo e Equilatero";
    }
    else if (l0 == l1 || l0 == l2 || l1 == l2)
    {
        cout << "Seu Triangulo e Isosceles";
    }
    else
    {
        cout << "Seu tringulo e Escaleno";
    }
}