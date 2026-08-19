#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Digite 1 numero: ";
    cin >> n;

    string paridade = (n % 2 == 0) ? "par" : "impar";

    cout << "O numero " << n << " e " << paridade << endl;

    return 0;
}