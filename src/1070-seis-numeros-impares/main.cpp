#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin >> num;

    if (num % 2 == 0)
        num++;

    for (int i = 0; i < 6; i++)
        cout << (num + i * 2) << '\n';

    return 0;
}