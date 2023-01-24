#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // PRE-COMPUTATION
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] = mpp[arr[i]] + 1;
    }

    // ITERATING ON MAP
    for (auto it : mpp)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    int query;
    cin >> query;
    while (query--)
    {
        int number;
        cin >> number;

        // FETCHING
        cout << mpp[number] << endl;
    }
    
    return 0;
}