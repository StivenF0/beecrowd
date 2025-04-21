#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    if (!(a % b) || !(b % a))
        cout << "Sao Multiplos\n";
    else
        cout << "Nao sao Multiplos\n";

    return 0;
}