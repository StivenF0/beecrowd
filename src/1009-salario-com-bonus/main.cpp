#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string nome;
    double salario, vendas;

    cin >> nome >> salario >> vendas;
    cout.precision(2);
    cout << "TOTAL = R$ " << fixed << (salario + vendas * 0.15) << '\n';

    return 0;
}