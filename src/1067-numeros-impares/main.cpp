#include <iostream>
using namespace std;

int main(void)
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i += 2)
        cout << i << '\n';

    return 0;
}