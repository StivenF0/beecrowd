#include <iostream>
using namespace std;

int main(void)
{
    double cardapio[] = {4, 4.5, 5, 2, 1.5};
    int p, q;
    cin >> p >> q;

    cout.precision(2);
    cout << fixed << "Total: R$ " << (cardapio[p - 1] * q) << '\n';

    return 0;
}