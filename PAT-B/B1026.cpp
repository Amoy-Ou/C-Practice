#include <iostream>
using namespace std;
#define CLK_TCK 100
int main()
{
    int c1, c2;
    cin >> c1 >> c2;
    int sec = (c2 - c1) / CLK_TCK;
    if ((c2 - c1) % CLK_TCK * 2 >= CLK_TCK)
        sec++;
    int hour = sec / 3600;
    sec -= hour * 3600;
    int min = sec / 60;
    sec -= min * 60;
    printf("%02d:%02d:%02d", hour, min, sec);
}