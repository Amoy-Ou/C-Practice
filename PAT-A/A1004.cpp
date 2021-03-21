#include <iostream>
#include <vector>
using namespace std;
const int MAX = 100;
vector<int> tree[MAX]; //记录树结构
int count[MAX];        //记录每一层的叶子结点数
int deepest = -1;      //记录最大深度，方便后面输出
void DFS(int root, int depth)
{
    //深度优先递归遍历树
    //返回条件，碰到叶子结点
    if (tree[root].size() == 0)
    {
        deepest = depth > deepest ? depth : deepest;
        count[depth]++;
        return;
    }
    else
    {
        for (int i = 0; i < tree[root].size(); i++)
        {
            DFS(tree[root][i], depth + 1);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int id, k;
        cin >> id >> k;
        for (int j = 0; j < k; j++)
        {
            int idj;
            cin >> idj;
            tree[id].push_back(idj);
        }
    }
    fill(count, count + MAX, 0);
    DFS(1, 0);
    bool flag = true;
    for (int i = 0; i <= deepest; i++)
    {
        if (flag)
        {
            cout << count[i];
            flag = false;
        }
        else
            cout << " " << count[i];
    }
}