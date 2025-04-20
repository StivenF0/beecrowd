#include <iostream>
using namespace std;

int main(void)
{
    int tempo, minutos, horas;

    cin >> tempo;

    horas = tempo / 3600;
    tempo = tempo % 3600;

    minutos = tempo / 60;
    tempo = tempo % 60;

    cout << horas << ':' << minutos << ':' << tempo << '\n';

    return 0;
}