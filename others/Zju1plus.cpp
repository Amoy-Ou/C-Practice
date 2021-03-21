#include <iostream>
#include <math.h>
using namespace std;
const int inf = pow(2, 30);
int main()
{
    int n, s = 0, e = inf;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j, k;
        cin >> j >> k;
        if (k <= s || j >= e)
        {
            cout << "XiaoQing, shuai!!!";
            return 0;
        }
        if (k <= e)
            e = k;
        if (j >= s)
            s = j;
    }
    cout << "XiaoQing, cai!!!";
    return 0;
}
