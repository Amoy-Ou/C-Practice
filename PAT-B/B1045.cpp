#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> mains;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (j < i && a[j] > a[i])
            {
                flag = false;
                break;
            }
            else if (j > i && a[j] < a[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            mains.push_back(a[i]);
    }
    sort(begin(mains), begin(mains) + mains.size());
    cout << mains.size() << endl;
    for (int i = 0; i < mains.size(); i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", mains[i]);
    }
    printf("\n");
}