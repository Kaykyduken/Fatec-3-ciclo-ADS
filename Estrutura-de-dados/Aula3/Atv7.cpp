#include <iostream>
using namespace std;
int main(void)
{
    float s, sl, in;
    cout << "Insira o salario anual\nR$:";
    cin >> s;
    if (s > 20000 && s <= 50000)
    {
        in = 10;
        sl = s - (s / in);
    }
    else if (s > 50000)
    {
        in = 20;
        sl = s - (s / in);
    }
    else
    {
        in = 0;
        sl = s;
    }
    cout << "Salario Bruto:R$" << s << "\nSalario Liquido:R$" << sl << "\nImposto aplicado de " << in << "%";
}