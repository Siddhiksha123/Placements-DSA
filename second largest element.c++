#include <bits/stdc++.h>
using namespace std;

int getElements(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        cout << -1 << " " << -1 << endl;
    }

    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;

    int i;

    for (i = 0; i < n; i++)
    {
        small = min(arr[i], small);
        large = max(arr[i], large);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] < second_small && arr[i] != small)
            second_small = arr[i];

        if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }
}
int main()
{
    int arr[] = {4, 7, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    getElements(arr, n);
    return 0;
}