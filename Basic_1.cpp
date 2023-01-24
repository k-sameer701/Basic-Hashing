#include <bits/stdc++.h>
using namespace std;

int check(int number, int array[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (number == array[i])
            count++;
    }
    return count;
}

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        cout << check(num, arr, size);
    }
    return 0;
}