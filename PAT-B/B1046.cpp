#include <iostream>
using namespace std;
int main()
{
    int n, count_a = 0, count_b = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        if (a2 == a1 + b1 && b2 == a1 + b1)
            continue;
        else if (a2 == a1 + b1)
            count_b++;
        else if (b2 == a1 + b1)
            count_a++;
    }
    cout << count_a << " " << count_b;
}