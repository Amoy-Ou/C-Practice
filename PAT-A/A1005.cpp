#include <iostream>
#include <string>
using namespace std;
void showNum(int n)
{
    switch (n)
    {
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "three";
        break;
    case 4:
        cout << "four";
        break;
    case 5:
        cout << "five";
        break;
    case 6:
        cout << "six";
        break;
    case 7:
        cout << "seven";
        break;
    case 8:
        cout << "eight";
        break;
    case 9:
        cout << "nine";
        break;
    case 0:
        cout << "zero";
    }
}
int main()
{
    string input;
    cin >> input;
    int sum = 0;
    for (int i = 0; i < input.size(); i++)
    {
        sum += input[i] - '0';
    }
    string output = to_string(sum);
    for (int i = 0; i < output.size(); i++)
    {
        if (i > 0)
            cout << " ";
        showNum(output[i] - '0');
    }
}