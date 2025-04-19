#include <iostream>

using std::cin, std::cout, std::fixed;

int main(void)
{
    double raio, pi = 3.14159;
    cin >> raio;
    cout.precision(4);
    cout << "A=" << fixed << (raio * raio * pi) << '\n';

    return 0;
}