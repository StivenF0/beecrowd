#include <iostream>
using namespace std;

int main(void)
{
    int pos = 0;
    float n;
    for (int i = 0; i < 6; i++)
    {
        cin >> n;
        if (n > 0)
            pos++;
    }

    cout << pos << " valores positivos\n";

    return 0;
}