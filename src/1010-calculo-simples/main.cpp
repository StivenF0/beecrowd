#include <iostream>
using namespace std;

int main(void)
{
    int c, q1, q2;
    double p1, p2;

    cin >> c >> q1 >> p1 >> c >> q2 >> p2;
    double res = q1 * p1 + q2 * p2;

    cout.precision(2);
    cout << "VALOR A PAGAR: R$ " << fixed << res << '\n';

    return 0;
}