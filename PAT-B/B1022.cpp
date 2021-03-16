#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int A, B, D;
    stack<int> s;
    cin >> A >> B >> D;
    int n = A + B;
    if (n == 0)//考虑A、B均为0的情况
        s.push(0);
    while (n > 0)
    {
        s.push(n % D);
        n = n / D;
    }
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}