#include <iostream>
using namespace std;
int main(void){
float n;
bool positivo = false, negativo = !positivo;
cout << "Insira um numero:";
cin >> n;
if (n > 0)
{
    positivo = true;
    cout << "o numero é positivo";    
}else if(n == 0)
{
    cout << "Zero nao e positivo nem negativo";
}
else if(negativo = true && n != 0)
{
    cout << "o numero é negativo";
}
}