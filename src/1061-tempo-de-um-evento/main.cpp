#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string wdia;
    char sep;

    // Dia inicial
    int diaIni, horaIni, minIni, segIni;
    cin >> wdia >> diaIni;
    cin >> horaIni >> sep >> minIni >> sep >> segIni;

    // Dia final
    int diaFim, horaFim, minFim, segFim;
    cin >> wdia >> diaFim;
    cin >> horaFim >> sep >> minFim >> sep >> segFim;

    // segundos no dia inicial
    long long tempoIni = (long long)diaIni * 24 * 60 * 60 + horaIni * 60 * 60 + minIni * 60 + segIni;

    // segundos no dia final
    long long tempoFim = (long long)diaFim * 24 * 60 * 60 + horaFim * 60 * 60 + minFim * 60 + segFim;

    // calcula tempo total (em segundos)
    long long tempo = tempoFim - tempoIni;

    // Calcular dias, horas, minutos e segundos
    int dias = tempo / (24 * 60 * 60);
    tempo %= (24 * 60 * 60);
    int horas = tempo / (60 * 60);
    tempo %= (60 * 60);
    int minutos = tempo / 60;
    int segundos = tempo % 60;

    // mostrar tempo
    cout << dias << " dia(s)\n";
    cout << horas << " hora(s)\n";
    cout << minutos << " minuto(s)\n";
    cout << segundos << " segundo(s)\n";

    return 0;
}