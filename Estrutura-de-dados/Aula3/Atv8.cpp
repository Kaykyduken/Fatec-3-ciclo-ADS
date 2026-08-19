#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cout << "Insira um numero:";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "O numero é par";
    }
    else
    {
        cout << "O numero é impar";
    }
}