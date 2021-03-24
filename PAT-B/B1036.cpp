#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double n;
    char c;
    cin >> n >> c;
    for (int i = 1; i <= (int)round(n / 2); i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == (int)round(n / 2) || j == 1 || j == n)
                cout << c;
            else
                cout << " ";
        }
        if (i != (int)round(n / 2))
            cout << endl;
    }
}