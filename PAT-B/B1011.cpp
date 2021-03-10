#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        //判定式是a+b-c，在进行a+b和（a+b）-c这两步中都有可能溢出
        if (a > 0 && b > 0)
        {
            if (c <= 0)
                cout << "Case #" << i << ": true" << endl;
            else
            {
                if (a > pow(2, 31) - b || b > pow(2, 31) - a)
                    cout << "Case #" << i << ": true" << endl;
                else
                {
                    if (a + b > c)
                        cout << "Case #" << i << ": true" << endl;
                    else
                        cout << "Case #" << i << ": false" << endl;
                }
            }
        }
        else if (a < 0 && b < 0)
        {
            if (c >= 0)
                cout << "Case #" << i << ": false" << endl;
            else
            {
                if (a < -pow(2, 31) - b - 1 || b < -pow(2, 31) - a - 1)
                    cout << "Case #" << i << ": false" << endl;
                else
                {
                    if (a + b > c)
                        cout << "Case #" << i << ": true" << endl;
                    else
                        cout << "Case #" << i << ": false" << endl;
                }
            }
        }
        else
        {
            if (a + b > 0 && c < 0)
            {
                cout << "Case #" << i << ": true" << endl;
            }
            else if (a + b < 0 && c > 0)
                cout << "Case #" << i << ": false" << endl;
            else
            {
                if (a < -pow(2, 31) - b - 1 || b < -pow(2, 31) - a - 1)
                    cout << "Case #" << i << ": false" << endl;
                else
                {
                    if (a + b > c)
                        cout << "Case #" << i << ": true" << endl;
                    else
                        cout << "Case #" << i << ": false" << endl;
                }
            }
        }
    }
    return 0;
}
