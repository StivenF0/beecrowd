#include <iostream>
using namespace std;

int main(void)
{
    double salario, imposto = 0;
    cin >> salario;

    if (salario > 2000)
        imposto += salario > 3000 ? 1000 * 0.08 : (salario - 2000) * 0.08;
    if (salario > 3000)
        imposto += salario > 4500 ? 1500 * 0.18 : (salario - 3000) * 0.18;
    if (salario > 4500)
        imposto += (salario - 4500) * 0.28;

    cout.precision(2);
    cout << fixed;

    if (imposto == 0)
        cout << "Isento\n";
    else
        cout << "R$ " << imposto << '\n';

    return 0;
}