#include <iostream>
using namespace std;
struct exam
{
    string id;
    int set;
};
int main()
{
    int N;
    cin >> N;
    exam stu[N + 1];
    for (int i = 0; i < N; i++)
    {
        string stuid;
        int testnum, setnum;
        cin >> stuid >> testnum >> setnum;
        stu[testnum].id = stuid;
        stu[testnum].set = setnum;
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int testnum;
        cin >> testnum;
        cout << stu[testnum].id << " " << stu[testnum].set << endl;
    }
}