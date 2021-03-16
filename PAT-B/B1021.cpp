#include <iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int count[10];
    for (int i = 0; i < 10; i++)
        count[i] = 0;
    for (int i = 0; i < str.size(); i++)
    {
        switch (str[i])
        {
        case '0':
            count[0]++;
            break;
        case '1':
            count[1]++;
            break;
        case '2':
            count[2]++;
            break;
        case '3':
            count[3]++;
            break;
        case '4':
            count[4]++;
            break;
        case '5':
            count[5]++;
            break;
        case '6':
            count[6]++;
            break;
        case '7':
            count[7]++;
            break;
        case '8':
            count[8]++;
            break;
        default:
            count[9]++;
        }
    }
    for (int i = 0; i < 10; i++)
        if (count[i] > 0)
            cout << i << ":" << count[i] << endl;
}