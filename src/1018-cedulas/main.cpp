#include <iostream>
using namespace std;

int main(void)
{
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int dinheiro;

    cin >> dinheiro;

    cout << dinheiro << '\n';
    for (int nota : notas)
    {
        int atual = dinheiro / nota;
        dinheiro = dinheiro % nota;

        cout << atual << " nota(s) de R$ " << nota << ",00\n";
    }

    return 0;
}