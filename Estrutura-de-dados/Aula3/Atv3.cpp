#include <iostream>
using namespace std;
int main(void)
{
    int e;

    cout << "Escolha uma materia\nvisao computacional - 1\nredes neurais - 2\neng. software - 3\nfront-end - 4\nback-end - 5\nbanco de dados - 6\nQualidade de software - 7\nIa - 8\nrealidade aumentada - 9\n Escolha:";
    cin >> e;
    switch (e)
    {
    case 1:
        cout << "Materia escolhida:visao computacional";
        break;
    case 2:
        cout << "Materia escolhida:redes neurais";
        break;
    case 3:
        cout << "Materia escolhida:engenharia de software";
        break;
    case 4:
        cout << "Materia escolhida:front-end";
        break;
    case 5:
        cout << "Materia escolhida:back-end";
        break;
    case 6:
        cout << "Materia escolhida:banco de dados";
        break;
    case 7:
        cout << "Materia escolhida:Qualidade de software";
        break;
    case 8:
        cout << "Materia escolhida:Inteligencia Artificial";
        break;
    case 9:
        cout << "Materia escolhida:realidade aumentada";
        break;
    default:
        break;
    }
}