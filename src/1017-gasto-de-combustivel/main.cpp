#include <iostream>
using namespace std;

int main(void)
{
    int tempo, velocidade;
    double resultado;

    cin >> tempo >> velocidade;
    resultado = tempo * velocidade / 12.0;

    cout.precision(3);
    cout << fixed << resultado << '\n';

    return 0;
}