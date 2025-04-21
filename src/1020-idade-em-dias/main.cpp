#include <iostream>
using namespace std;

int main(void)
{
    int anos, meses, dias;

    cin >> dias;

    anos = dias / 365;
    dias = dias % 365;
    meses = dias / 30;
    dias = dias % 30;

    cout << anos << " ano(s)\n";
    cout << meses << " mes(es)\n";
    cout << dias << " dia(s)\n";

    return 0;
}