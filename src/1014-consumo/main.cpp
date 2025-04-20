#include <iostream>
using namespace std;

int main(void)
{
    int km;
    double l;

    cin >> km >> l;
    cout.precision(3);
    cout << fixed << (km / l) << " km/l\n";

    return 0;
}