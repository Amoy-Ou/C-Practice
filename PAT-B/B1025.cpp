#include <iostream>
#include <algorithm>
using namespace std;
#define maxsize 100000

int main()
{
    int head, N, K;
    cin >> head >> N >> K;
    int data[maxsize], next[maxsize], list[maxsize];
    for (int i = 0; i < N; i++)
    {
        int address;
        cin >> address;
        cin >> data[address] >> next[address];
    }
    int sum = 0;
    while (head != -1)
    {
        list[sum++] = head;
        head = next[head];
    }
    list[sum] = -1;
    for (int i = 0; i <= (sum - K); i += K)
    {
        reverse(begin(list) + i, begin(list) + i + K);
    }
    for (int i = 0; i < sum; i++)
    {
        printf("%05d", list[i]);
        cout << " " << data[list[i]] << " ";
        if (list[i + 1] >= 0)
            printf("%05d\n", list[i + 1]);
        else
            printf("%d\n", list[i + 1]);
    }
}