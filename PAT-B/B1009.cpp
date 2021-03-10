#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main()
{
    string str;
    stack<string> s;
    //单个输入
    while (cin >> str)
    {
        s.push(str);
    }
    /*
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            s.push(temp);
            temp = "";
        }
        else
        {
            temp += str[i];
        }
    }*/
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
        if (!s.empty())
        {
            cout << " ";
        }
    }
}