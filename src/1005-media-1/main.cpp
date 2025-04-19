#include <iostream>
using namespace std;

int main(void)
{
    double a, b;
    cin >> a >> b;
    double media = (a * 3.5 + b * 7.5) / 11;
    cout.precision(5);
    cout << "MEDIA = " << fixed << media << '\n';

    return 0;
}