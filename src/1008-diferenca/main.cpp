#include <iostream>
using namespace std;

int main(void)
{
    int num, hora;
    double din;

    cin >> num >> hora >> din;
    double salario = hora * din;

    cout.precision(2);
    cout << "NUMBER = " << num << "\nSALARY = U$ " << fixed << salario << '\n';

    return 0;
}