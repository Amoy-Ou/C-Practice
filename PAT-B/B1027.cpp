#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    char c;
    cin >> n >> c;
    int k = 1;
    while (2 * pow(k, 2) - 1 <= n)
        k++;
    k--;
    int len = 2 * k - 1;
    for (int i = len; i > 1; i -= 2)
    {
        for (int j = (len - i) / 2; j > 0; j--)
            cout << " ";
        for (int j = i; j > 0; j--)
            cout << c;
        cout << endl;
    }
    for (int i = 1; i <= len; i += 2)
    {
        for (int j = (len - i) / 2; j > 0; j--)
            cout << " ";
        for (int j = i; j > 0; j--)
            cout << c;
        cout << endl;
    }
    int left = n - 2 * pow(k, 2) + 1;
    cout << left;
}