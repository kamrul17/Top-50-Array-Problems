#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);
    // Initial difference
    int ans = arr[n - 1] - arr[0];
    // Handling edge cases
    int small = arr[0] + k;
    int big = arr[n - 1] - k;

    for (int i = 0; i < n - 1; i++)
    {
        int mini = min(small, arr[i + 1] - k);
        int maxi = max(big, arr[i] + k);
        if (mini < 0)
        {
            continue;
        }
        ans = min(ans, maxi - mini);
    }
    return ans;
}
int main()
{
    int arr[] = {1, 8, 10, 6, 4, 6, 9, 1};
    int k = 7;
    int n = sizeof(arr) / sizeof(int);
    int ans = getMinDiff(arr, n, k);
    cout << ans;
    return 0;
}