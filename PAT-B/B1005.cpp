#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int k, count[101];
    cin >> k;
    int in[k];
    for (int i = 0; i < 102; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < k; i++)
    {
        cin >> in[i];
        while (in[i] != 1)
        {
            if (in[i] % 2 != 0)
                in[i] = 3 * in[i] + 1;
            in[i] = in[i] / 2;
            count[in[i]]++;
        }
    }
}