#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<int> vinput, vsort;
    int tmp;
    for (int i = 0; i < 3; i++)
        cin >> tmp, vinput.push_back(tmp), vsort.push_back(tmp);

    sort(begin(vsort), end(vsort));

    for (int n : vsort)
        cout << n << '\n';
    cout << '\n';

    for (int n : vinput)
        cout << n << '\n';

    return 0;
}