#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int m;
    cin >> m;

    string months[] = {"January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};

    cout << months[m - 1] << '\n';

    return 0;
}