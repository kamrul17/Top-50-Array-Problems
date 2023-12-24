/*You are given an array arr[] of N integers. The task is to find the smallest positive number missing from the array.

Note: Positive number starts from 1.

Example 1:

Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 6
Explanation: Smallest positive missing
number is 6.*/
#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 && arr[i] == count)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    int arr[] = {0, -10, 1, 3, -20};
    int n = sizeof(arr) / sizeof(int);
    int ans = missingNumber(arr, n);

    cout << ans;
    return 0;
}
