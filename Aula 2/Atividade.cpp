#include <iostream>
using namespace std;
int main(){
 int idade;
 cout << "Digite sua idade: ";
 if ( cin >> idade && idade >= 18){
    cout << "Voce e maior de idade.\n";
 }else{
    cout << "Voce e menor de idade.\n";
 }

}