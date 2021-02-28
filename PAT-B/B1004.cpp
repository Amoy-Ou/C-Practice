#include <iostream>
using namespace std;
#include <string>
int main()
{
    int n;
    cin >> n;
    string name[n], num[n];
    int score[n];
    for (int i = 0; i < n; i++)
    {
        cin >> name[i] >> num[i] >> score[i];
    }
    int low = 0, high = 0;
    for (int i = 1; i < n; i++)
    {
        if (score[i] < score[low])
            low = i;
        if (score[i] > score[high])
            high = i;
    }
    cout << name[high] << " " << num[high] << endl;
    cout << name[low] << " " << num[low] << endl;
}