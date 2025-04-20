#include <iostream>
using namespace std;

int main(void)
{
    // Cálculo da distância
    // Sy - Sx = D
    // (vy * t) - (vx * t) = D
    // (vy - vx) * t = D
    // t = D / (vy - vx)
    // t = D / (90 - 60)
    // t = D / 30 * 60
    // t = D * 2

    int d, t;
    cin >> d;
    t = d * 2;

    cout << t << " minutos\n";

    return 0;
}