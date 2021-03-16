#include <iostream>
using namespace std;
int main()
{
    int n;
    float needed;
    float profit = 0.0;
    cin >> n >> needed;
    float num[n], price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    while (needed > 0)
    {
        int index=0; //分别记录最大单价及其下标
        float max=price[0] / num[0];
        for (int i = 1; i < n; i++)
        {
            if (price[i] / num[i] > max)
            {
                index = i;
                max = price[i] / num[i];
            }
        }
        if (price[index] < 0)
            break;
        if (needed > num[index])
        {
            profit += price[index];
            price[index] = -1;
            needed -= num[index];
        }
        else
        {
            profit += needed / num[index] * price[index];
            needed = 0;
        }
    }
    printf("%.2f",profit);
}