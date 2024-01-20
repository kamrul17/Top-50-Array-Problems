#include <bits/stdc++.h>
using namespace std;
int equilibriumPoint(int arr[], int n)
{

    if (n == 1)
    {
        return 1;
    }

    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum -= arr[i];

        if (leftSum == totalSum)
        {
            return i + 1;
        }

        leftSum += arr[i];
    }

    return -1;
}

int main()
{

    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(int);
    int ans = equilibriumPoint(arr, n);
    cout << ans;
    return 0;
}
