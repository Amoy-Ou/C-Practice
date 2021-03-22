#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n], max = 0;
    vector<int> mains;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i] && b[i] > max)
            mains.push_back(a[i]);
        if (b[i] > max)
            max = b[i];
    }
    cout << mains.size() << endl;
    for (int i = 0; i < mains.size(); i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", mains[i]);
    }
    printf("\n");
}