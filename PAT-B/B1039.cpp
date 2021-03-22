
#include <iostream>
using namespace std;
int main()
{
    int count[128]; //count ASCII
    fill(count, count + 128, 0);
    string sell, need;
    cin >> sell >> need;
    bool flag = true;
    for (int i = 0; i < sell.length(); i++)
    {
        count[sell[i]]++;
    }
    int lack = 0;
    for (int i = 0; i < need.length(); i++)
    {
        if (count[need[i]] <= 0)
        {
            flag = false;
            lack++;
        }
        count[need[i]]--;
    }
    if (flag)
    {
        cout << "Yes"
             << " " << sell.size() - need.size();
    }
    else
    {
        cout << "No"
             << " " << lack;
    }
}