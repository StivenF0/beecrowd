#include <iostream>
using namespace std;

int main(void)
{
    double a, b, c, res;
    cin >> a >> b >> c;

    bool tri = a + b > c && a + c > b && b + c > a;

    cout.precision(1);
    cout << fixed;

    if (tri)
        cout << "Perimetro = " << (a + b + c) << '\n';
    else
        cout << "Area = " << ((a + b) * c / 2) << '\n';

    return 0;
}