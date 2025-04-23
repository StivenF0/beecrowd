#include <iostream>
using namespace std;

int main(void)
{
    double salario;
    cin >> salario;

    int ajuste;
    if (salario >= 0 && salario <= 400)
        ajuste = 15;
    else if (salario > 400 && salario <= 800)
        ajuste = 12;
    else if (salario > 800 && salario <= 1200)
        ajuste = 10;
    else if (salario > 1200 && salario <= 2000)
        ajuste = 7;
    else if (salario > 2000)
        ajuste = 4;

    cout.precision(2);
    cout << fixed;

    cout << "Novo salario: " << (salario * (ajuste / 100.0 + 1)) << '\n';
    cout << "Reajuste ganho: " << (salario * ajuste / 100.0) << '\n';
    cout << "Em percentual: " << (ajuste) << " %\n";

    return 0;
}