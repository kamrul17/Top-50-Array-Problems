/*Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season.
 */
#include <bits/stdc++.h>
using namespace std;
int trappingWater(int arr[], int n)
{
    int maxL[n];
    int maxR[n];
    int waterL[n];
    maxL[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxL[i] = max(maxL[i - 1], arr[i]);
    }
    maxR[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        maxR[i] = max(maxR[i + 1], arr[i]);
    }

    for (int i = n - 2; i >= 0; i--)
    {
        waterL[i] = min(maxL[i], maxR[i]) - arr[i];
    }
    int sum = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        sum += waterL[i];
    }

    return sum;
}
int main()
{
    int arr[] = {8, 8, 2, 4, 5, 5, 1};
    int n = sizeof(arr) / sizeof(int);
    int ans = trappingWater(arr, n);
    cout << ans;
    return 0;
}