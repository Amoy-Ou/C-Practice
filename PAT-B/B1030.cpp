#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 100005;
int main()
{
    int N;
    long long p;
    cin >> N >> p;
    int A[MAX];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A, A + N);
    int MNum = 0;
    for (int i = 0; i < N; i++)
    {
        int j = 0;
        for (j = i + MNum; j < N; j++)
        {
            if (A[j] > A[i] * p)
                break;
        }
        if (j - i > MNum)
            MNum = j - i;
    }
    cout << MNum;
}