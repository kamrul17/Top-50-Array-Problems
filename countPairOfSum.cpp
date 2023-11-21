// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.
#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n, int k)
{

    int count = 0;

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = j + 1; i < n; i++)
        {

            if (arr[j] + arr[i] == k)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int k = 3;
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 4, 46, 7, 78, 95, 4, 3, 33, 3};
    int n = sizeof(arr) / sizeof(int);
    int ans = solve(arr, n, k);
    cout << ans;
}
