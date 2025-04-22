#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<double> v;

    double tmp;
    for (int i = 0; i < 6; i++)
    {
        cin >> tmp;
        if (tmp > 0)
            v.push_back(tmp);
    }

    double media = 0;
    for (double num : v)
        media += num;

    media /= v.size();

    cout.precision(1);
    cout << fixed;
    cout << v.size() << " valores positivos\n"
         << media << '\n';

    return 0;
}