#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0

    if (b > c &&
        d > a &&
        c + d > a + b &&
        c > 0 &&
        d > 0 &&
        a % 2 == 0)
        cout << "Valores aceitos\n";
    else
        cout << "Valores nao aceitos\n";

    return 0;
}