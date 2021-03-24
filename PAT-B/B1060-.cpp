#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define max 100005
int countnum[max];
int c[max];
int main()
{
    fill(countnum, countnum + max, 0);
    fill(c, c + max, 0);
    int n;
    cin >> n;
    vector<int> dis;
    for (int i = 0; i < n; i++)
    {
        int dist;
        cin >> dist;
        if (countnum[dist] == 0)
            dis.push_back(dist);
        countnum[dist]++;
    }
    sort(dis.begin(), dis.end());
    int pre = 0;
    for (int i = dis.size() - 1; i >= 0; i--)
    {
        c[dis[i]] = countnum[dis[i]] + pre;
        pre = c[dis[i]];
        if (c[dis[i]] - countnum[dis[i]] >= dis[i])
        {
            cout << dis[i];
            break;
        }
    }
}
