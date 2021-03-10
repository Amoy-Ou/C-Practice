#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
    int count2 = 0, count4 = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a % 5 == 0)
        {
            if (a % 2 == 0)
                a1 += a;
        }
        else if (a % 5 == 1)
        {
            a2 += a * pow(-1, count2++);
        }
        else if (a % 5 == 2)
            a3++;
        else if (a % 5 == 3)
        {
            a4 += a;
            count4++;
        }
        else
        {
            if (a > a5)
                a5 = a;
        }
    }
    if (a1 == 0)
        cout << 'N' << " ";
    else
        cout << a1 << " ";
    if (count2 > 0)
        cout << a2 << " ";
    else
        cout << 'N' << " ";
    if (a3 > 0)
        cout << a3 << " ";
    else
        cout << 'N' << " ";
    if (count4 > 0)
        printf("%.1f ", (float)a4 / count4);
    else
        cout << 'N' << " ";
    if (a5 > 0)
        cout << a5;
    else
        cout << 'N';
    return 0;
}