#include <iostream>
using namespace std;

int main(void)
{
    double n1, n2, n3, n4, e, m;
    cin >> n1 >> n2 >> n3 >> n4;

    m = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;

    cout.precision(1);
    cout << fixed;

    cout << "Media: " << m << '\n';

    if (m >= 7)
    {
        cout << "Aluno aprovado.\n";
        return 0;
    }

    if (m < 5)
    {
        cout << "Aluno reprovado.\n";
        return 0;
    }

    cout << "Aluno em exame.\n";

    cin >> e;

    cout << "Nota do exame: " << e << '\n';

    m = (m + e) / 2;

    if (m >= 5)
        cout << "Aluno aprovado.\n";
    else
        cout << "Aluno reprovado.\n";

    cout << "Media final: " << m << '\n';

    return 0;
}