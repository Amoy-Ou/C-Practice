#include <iostream>
using namespace std;
const int MAX = 1000000007;
int main()
{
    string input;
    cin >> input;
    int num = 0;
    int count[128];
    fill(count, count + 128, 0);
    int flag = 0;
    for (int i = 0; i < input.size(); i++)
    {
        count[input[i]]++;
    }
    int numA = 0, numT = 0, numLast = 0;
    for (int i = 0; i < input.size() && count['P'] > 0 && count['A'] > 0 && count['T'] > 0; i++)
    {
        if (input[i] == 'P' && flag == 0)
        {
            flag++;
            for (int j = i + 1; j < input.size() && count['T'] - numT > 0; j++)
            {
                if (input[j] == 'A')
                    numA++;
                else if (input[j] == 'T')
                {
                    num += numA;
                    numT++;
                }
            }
            count['P']--;
            num = num % MAX;
            numLast = num;
        }
        else if (input[i] == 'P' && flag == 1)
        {
            num = (num + numLast) % MAX;
            numA = count['A'];
            count['P']--;
        }
        else if (input[i] == 'A')
        {
            count['A']--;
            numLast -= count['T'];
        }
        else
            count['T']--;
    }
    cout << num;
}