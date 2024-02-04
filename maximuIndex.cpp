/*Given an array arr[] of n non-negative integers. The task is to find the maximum of j - i (i<=j) subjected to the constraint of arr[i] <= arr[j].

Example 1:

Input:
n = 9
arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
Output:
6
Explanation:
In the given array arr[1] < arr[7]  satisfying
the required condition (arr[i] <= arr[j])  thus
giving the maximum difference of j - i which is
6(7-1).*/
#include <bits/stdc++.h>
using namespace std;
/*int maxIndexDiff(int arr[], int n)
{
    int maxi = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                maxi = max(maxi, j - i);
            }
        }
    }
    return maxi;
}*/
int maxIndexDiff(int arr[], int n)
{
    vector<int> leftMin(n), rightMax(n);

    leftMin[0] = arr[0];
    for (int i = 1; i < n; ++i)
    {
        leftMin[i] = min(leftMin[i - 1], arr[i]);
    }

    rightMax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
        rightMax[i] = max(rightMax[i + 1], arr[i]);
    }

    int i = 0, j = 0, maxDiff = -1;

    while (i < n && j < n)
    {
        if (leftMin[i] <= rightMax[j])
        {
            maxDiff = max(maxDiff, j - i);
            ++j;
        }
        else
        {
            ++i;
        }
    }

    return maxDiff;
}
int main()
{
    int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = sizeof(arr) / sizeof(int);

    int ans = maxIndexDiff(arr, n);
    cout << ans;
    return 0;
}