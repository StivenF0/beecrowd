#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    for (int i = 2; i <= n; i += 2)
    {
        cout << i << "^2 = " << (long long)i * i << '\n';
    }

    return 0;
}