#include <iostream>
#include <math.h>
using namespace std;
const int MAX = pow(2, 10);
int main()
{
    int n;
    bool flag = true;
    cin >> n;
    int time[MAX];
    fill(time, time + MAX, 0);
    for (int i = 0; i < n; i++)
    {
        int s, e;
        cin >> s >> e;
        for (int j = s; j <= e; j++)
        {
            if (time[j] == 0)
                time[j] = 1;
            else if (j == s && time[j + 1] == 0)
                continue;
            else if (j == e && time[j + 1] == 1)
                continue;
            else
                flag = false;
        }
    }
    if (flag)
        cout << "XiaoQing, shuai!!!";
    else
        cout << "XiaoQing, cai!!!";
}
