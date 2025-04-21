#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void)
{
    double arr[3];
    for (int i = 0; i < 3; i++)
        cin >> arr[i];

    sort(begin(arr), end(arr));
    reverse(begin(arr), end(arr));

    if (arr[0] >= arr[1] + arr[2])
    {
        cout << "NAO FORMA TRIANGULO\n";
        return 0;
    }

    bool retangulo = pow(arr[0], 2) == pow(arr[1], 2) + pow(arr[2], 2);
    bool obtusangulo = pow(arr[0], 2) > pow(arr[1], 2) + pow(arr[2], 2);
    bool acutangulo = pow(arr[0], 2) < pow(arr[1], 2) + pow(arr[2], 2);

    bool equilatero = arr[0] == arr[1] && arr[1] == arr[2];
    bool isosceles = (arr[0] == arr[1] && arr[1] != arr[2]) ||
                     (arr[0] != arr[1] && arr[1] == arr[2]);

    if (retangulo)
    {
        cout << "TRIANGULO RETANGULO\n";
        if (isosceles)
            cout << "TRIANGULO ISOSCELES\n";
    }
    else if (obtusangulo)
    {
        cout << "TRIANGULO OBTUSANGULO\n";
        if (isosceles)
            cout << "TRIANGULO ISOSCELES\n";
    }
    else if (acutangulo)
    {
        cout << "TRIANGULO ACUTANGULO\n";
        if (equilatero)
            cout << "TRIANGULO EQUILATERO\n";
        else if (isosceles)
            cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}