#include <iostream>
using namespace std;
int main()
{
    int N, K, count[101];
    fill(count, count + 101, 0);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int score;
        cin >> score;
        count[score]++;
    }
    cin >> K;
    bool flag = true;
    for (int i = 0; i < K; i++)
    {
        int score;
        cin >> score;
        if (flag)
        {
            printf("%d", count[score]);
            ;
            flag = false;
        }
        else
            printf(" %d", count[score]);
    }
}