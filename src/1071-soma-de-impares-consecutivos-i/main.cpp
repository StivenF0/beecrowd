#include <iostream>
using namespace std;

int main(void)
{
    int x, y, sum = 0;
    cin >> x >> y;

    if (x > y)
    {
        int tmp = x;
        x = y;
        y = tmp;
    }

    x++;

    if (x % 2 == 0)
        x++;

    for (; x < y; x += 2)
        sum += x;

    cout << sum << '\n';

    return 0;
}