#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        if (n >= 100)
        {
            int b = n / 100;
            for (int i = 0; i < b; i++)
                cout << "B";
            n = n - b * 100;
        }
        else if (n >= 10)
        {
            int s = n / 10;
            for (int i = 0; i < s; i++)
                cout << "S";
            n = n - s * 10;
        }
        else
        {
            for (int i = 1; i <= n; i++)
                cout << i;
            n = 0;
        }
    }
}
