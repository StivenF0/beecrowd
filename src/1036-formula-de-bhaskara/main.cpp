#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0.0)
    {
        cout << "Impossivel calcular\n";
        return 0;
    }

    double delta = pow(b, 2) - 4 * a * c;

    if (delta < 0)
    {
        cout << "Impossivel calcular\n";
        return 0;
    }

    double x1 = (-b - sqrt(delta)) / (2 * a);
    double x2 = (-b + sqrt(delta)) / (2 * a);

    cout.precision(5);
    cout << fixed;
    cout << "R1 = " << x2 << '\n';
    cout << "R2 = " << x1 << '\n';

    return 0;
}