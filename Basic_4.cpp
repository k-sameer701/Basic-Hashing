#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int character_number[26] = {0};

    // PRECOMPUTATION
    for (int i = 0; i < str.size(); i++)
    {
        character_number[str[i] - 'a'] = character_number[str[i] - 'a'] + 1;
    }

    int query;
    cin >> query;
    while (query--)
    {
        char ch;
        cin >> ch;
        // FETCHING
        cout << character_number[ch - 'a'] << endl;
    }

    return 0;
}