#include <iostream>
using namespace std;
int main()
{
    int c, e;
    int flag = 0;
    while (cin >> c >> e)
    {
        if (e == 0&&flag ==0)//只有常数项的情况
            cout << 0 << " " << 0;
        if (e != 0)
        {
            c = c * e;
            e--;
            if (flag == 0)
            {
                cout << c << " " << e;
                flag++;
            }
            else
                cout << " " << c << " " << e;
        }
    }
}