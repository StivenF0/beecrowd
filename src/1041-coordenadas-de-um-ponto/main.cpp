#include <iostream>
using namespace std;

int main(void)
{
    double x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << "Origem\n";
        return 0;
    }

    if (x == 0)
    {
        cout << "Eixo Y\n";
        return 0;
    }

    if (y == 0)
    {
        cout << "Eixo X\n";
        return 0;
    }

    if (x > 0 && y > 0)
    {
        cout << "Q1\n";
        return 0;
    }

    if (x < 0 && y > 0)
    {
        cout << "Q2\n";
        return 0;
    }

    if (x < 0 && y < 0)
    {
        cout << "Q3\n";
        return 0;
    }

    if (x > 0 && y < 0)
    {
        cout << "Q4\n";
        return 0;
    }

    return 0;
}