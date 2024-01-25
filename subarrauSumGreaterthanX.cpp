#include <bits/stdc++.h>
using namespace std;
/*int smallestSubWithSum(int arr[], int n, int x)
{
    int mini = INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum > x)
            {
                mini = min(mini, j - i + 1);
            }
        }
    }
    return mini;
}*/
int smallestSubWithSum(int arr[], int n, int x)
{
    int mini = INT8_MAX;
    int i = 0;
    int j = 0;
    int sum = 0;
    while (j < n)
    {
        sum += arr[j];
        while (sum > x)
        {
            mini = min(mini, j - i + 1);
            sum -= arr[i];
            i++;
        }
        j++;
    }

    return (mini == INT8_MAX) ? 0 : mini;
}
int main()
{
    int arr[] = {1, 4, 45, 6, 0, 19};
    int n = sizeof(arr) / sizeof(int);
    int x = 51;
    int ans = smallestSubWithSum(arr, n, x);
    cout << ans;
    return 0;
}