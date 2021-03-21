#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
void split(int a[3], string s)
{
    if (s.length() == 0)
    {
        fill(a, a + 3, 0);
        return;
    }
    int j = 0, k = 0;
    char str[9];
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.' || i == s.length() - 1)
        {
            if (i == s.length() - 1)
                str[k++] = s[i];
            a[j++] = atoi(str);
            k = 0;
            fill(str, str + 9, 0);
        }
        else
        {
            str[k++] = s[i];
        }
    }
}
int main()
{
    string P, A;
    int p[3], a[3], result[3];
    cin >> P >> A;
    split(p, P);
    split(a, A);
    //类似于做三位数减法，不够就借位
    int flag = 1;
    //永远让大数减小数
    if (a[0] < p[0])
    {
        flag = -1;
        for (int i = 0; i < 3; i++)
        {
            // cout << p[i] << " " << a[i] << endl;
            result[i] = a[i];
            a[i] = p[i];
            p[i] = result[i];
            result[i] = 0;
        }
    }
    for (int i = 2; i >= 0; i--)
    {
        if (a[i] >= p[i])
            result[i] = a[i] - p[i];
        else
        {
            if (i == 0)
                result[i] = a[i] - p[i];
            else if (i == 1)
            {
                result[i] = 17 + a[i] - p[i];
                a[i - 1]--;
            }
            else
            {
                result[i] = 29 + a[i] - p[i];
                a[i - 1]--;
            }
        }
    }
    cout << flag * result[0] << '.' << result[1] << '.' << result[2];
}