#include <iostream>
using namespace std;
int main(void){
int numero;
cout << "Digite um numero: ";
if(cin >> numero, numero >= 10 && numero <= 20){
cout << "O numero esta no intervalo de 10 a 20." << endl;
}else
{
    cout << "O numero esta fora do intervalo de 10 a 20" << endl;
}

}