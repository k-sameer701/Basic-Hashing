#include <bits/stdc++.h>
using namespace std;

int check(string str, char ch)
{
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (ch == str[i])
            count++;
    }

    return count;
}

int main()
{
    string str;
    cin >> str;

    int query;
    cin >> query;
    while (query--)
    {
        char ch;
        cin >> ch;
        cout << check(str, ch) << endl;
    }

    return 0;
}