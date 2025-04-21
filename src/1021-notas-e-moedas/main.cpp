#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    double valor;

    cin >> valor;

    long long centavos = (valor * 100) + 0.5;

    cout.precision(2);
    cout << fixed;

    cout << "NOTAS:\n";
    for (int nota : notas)
    {
        int q = centavos / (nota * 100);
        centavos %= nota * 100;

        cout << q << " nota(s) de R$ " << (double)nota << '\n';
    }

    cout << "MOEDAS:\n";
    for (int moeda : moedas)
    {
        int q = centavos / moeda;
        centavos %= moeda;

        cout << q << " moeda(s) de R$ " << moeda / 100.0 << '\n';
    }

    return 0;
}