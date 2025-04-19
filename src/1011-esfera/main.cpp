#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    double raio;
    cin >> raio;

    double vol = (4 / 3.0) * 3.14159 * pow(raio, 3);
    cout.precision(3);
    cout << "VOLUME = " << fixed << vol << '\n';

    return 0;
}