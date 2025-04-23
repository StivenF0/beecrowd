#include <iostream>
using namespace std;

int main(void)
{
    int q = 0;
    for (int i = 0, n; i < 5; i++)
    {
        cin >> n;
        if (n % 2 == 0)
            q++;
    }

    cout << q << " valores pares\n";

    return 0;
}