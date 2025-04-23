#include <iostream>
using namespace std;

int main(void)
{
    int ini, fim;
    cin >> ini >> fim;

    if (fim <= ini)
        fim += 24;

    cout << "O JOGO DUROU " << (fim - ini) << " HORA(S)\n";

    return 0;
}