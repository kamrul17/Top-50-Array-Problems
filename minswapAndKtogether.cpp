/*Given an array arr of n positive integers and a number k. One can apply a swap operation on the array any number of times, i.e choose any two index i and j (i < j) and swap arr[i] , arr[j] . Find the minimum number of swaps required to bring all the numbers less than or equal to k together, i.e. make them a contiguous subarray.

Example 1:

Input :
arr[ ] = {2, 1, 5, 6, 3}
K = 3
Output :
1
Explanation:
To bring elements 2, 1, 3 together,
swap index 2 with 4 (0-based indexing),
i.e. element arr[2] = 5 with arr[4] = 3
such that final array will be-
arr[] = {2, 1, 3, 6, 5}*/
#include <bits/stdc++.h>
using namespace std;
int minSwap(int arr[], int n, int k)
{
    int count = 0;
    int currentWindow = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            count++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (arr[i] <= k)
        {
            currentWindow++;
        }
    }
    int ans = count - currentWindow;
    for (int i = count; i < n; i++)
    {
        if (arr[i] <= k)
        {
            currentWindow++;
        }
        if (arr[i - count] <= k)
        {
            currentWindow--;
        }
        ans = min(ans, count - currentWindow);
    }
    return ans;
}
int main()
{
    int arr[] = {2, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;
    int ans = minSwap(arr, n, k);
    cout << ans;
    return 0;
}