#include <iostream>
using namespace std;
/**
 * 判断是否是素数
 */
bool isPrim(int n)
{
    int i = 2;
    while (i*i <= n)
    {
        if (n % i == 0)
            return false;
        i++;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    int count = 0, i = 5;
    while (i <= n)
    {
        //符合条件的只可能在相邻奇数中产生
        if (isPrim(i) && isPrim(i - 2))
            count++;
        i += 2;
    }
    cout << count;
}