#include <iostream>
#include <queue>
#include <vector>
using namespace std;
const int MAX = 510;
#define inf 0x7777777
int N, M, s, d;
int rescue[MAX];    //rescue team number
int road[MAX][MAX]; //weight
int dist[MAX];      //distance
int teams[MAX];     //rescue team number
int paths[MAX];     //shortest paths
bool visited[MAX];
int main()
{
    cin >> N >> M >> s >> d;
    for (int i = 0; i < N; i++)
        cin >> rescue[i];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            road[i][j] = inf;
        }
    }
    for (int i = 0; i < M; i++)
    {
        int c1, c2, l;
        cin >> c1 >> c2 >> l;
        road[c1][c2] = road[c2][c1] = l;
    }
    fill(dist, dist + MAX, inf);
    //initialize
    dist[s] = 0;
    teams[s] = rescue[s];
    paths[s] = 1;
    for (int i = 0; i < N; i++)
    {
        int min = inf, c = -1;
        for (int k = 0; k < N; k++)
        {
            if (visited[k] == false && dist[k] < min)
            {
                c = k;
                min = dist[k];
            }
        } //select shortest city to T
        if (c == -1)
            break;
        visited[c] = true;
        for (int v = 0; v < N; v++)
        {
            //update
            if (visited[v] == false && road[c][v] != inf)
            {
                if (dist[v] > road[c][v] + dist[c])
                {
                    paths[v] = paths[c];
                    teams[v] = teams[c] + rescue[v];
                    dist[v] = road[c][v] + dist[c];
                }
                else if (dist[v] == road[c][v] + dist[c])
                {
                    paths[v] += paths[c];
                    if (teams[c] + rescue[v] > teams[v])
                        teams[v] = teams[c] + rescue[v];
                }
            }
        }
    }
    cout << paths[d] << " " << teams[d];
}