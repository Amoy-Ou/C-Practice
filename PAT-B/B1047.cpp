#include <iostream>
using namespace std;
int main()
{
    int N, max = 0, team[1005], index;
    fill(team, team + 1005, 0);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int tid, pid, score;
        scanf("%d-%d %d", &tid, &pid, &score);
        team[tid] += score;
        if (team[tid] > max)
        {
            max = team[tid];
            index = tid;
        }
    }
    cout << index << " " << max;
}