#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int k, count[101]; //count记录该处元素是否被覆盖
    cin >> k;
    int in[k]; //输入数组
    for (int i = 0; i < 102; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < k; i++)
    {
        cin >> in[i];
        int n = in[i];
        while (n != 1)
        {
            if (n % 2 != 0)
                n = 3 * n + 1;
            n = n / 2;
            if (n < 101)
                count[n]++;
        }
    }
    sort(in, in + k);
    int flag = 0;
    for (int i = k - 1; i >= 0; i--)
    {
        if (count[in[i]] == 0)
        {
            if (flag == 0)
            {
                cout << in[i];
                flag++; //用flag判断是否是第一个输出元素
            }
            else
                cout << ' ' << in[i];
        }
    }
}