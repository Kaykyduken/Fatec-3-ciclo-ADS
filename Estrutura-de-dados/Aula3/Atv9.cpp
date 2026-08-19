#include <iostream>
using namespace std;
int main(void)
{
    char v0 = 'a', v1 = 'e', v2 = 'i', v3 = 'o', v4 = 'u', V0 = 'A', V1 = 'E', V2 = 'I', V3 = 'O', V4 = 'U', e;
    cout << "Digite uma letra\n";
    cin >> e;
    if (e == v0 || e == v1 || e == v2 || e == v3 || e == v4 || e == V0 || e == V1 || e == V2 || e == V3 || e == V4)
    {
        cout << "A letra " << e << " e uma vogal";
    }
    else
    {
        cout << "A letra " << e << " e uma consoante";
    }
}
