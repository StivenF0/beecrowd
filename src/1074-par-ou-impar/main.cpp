#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    for (int i = 0, x; i < n; i++)
    {
        cin >> x;

        if (!x)
        {
            cout << "NULL\n";
            continue;
        }

        if (x % 2 == 0)
            cout << "EVEN ";
        else
            cout << "ODD ";

        if (x > 0)
            cout << "POSITIVE\n";
        else
            cout << "NEGATIVE\n";
    }

    return 0;
}