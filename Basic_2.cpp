#include <bits/stdc++.h>
using namespace std;

int hashh[10000000];

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // PRECOMPUTATION
    for (int i = 0; i < size; i++)
    {
        hashh[arr[i]] = hashh[arr[i]] + 1;
    }

    int query;
    cin >> query;
    while (query)
    {
        int number;
        cin >> number;

        // FETCHING
        cout << hashh[number] << endl;
    }

    return 0;
}