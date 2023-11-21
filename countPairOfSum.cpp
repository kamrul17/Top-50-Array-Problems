// Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.
#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n, int k)
{

    // int count = 0;

    // for (int j = 0; j < n - 1; j++)
    // {
    //     for (int i = j + 1; i < n; i++)
    //     {

    //         if (arr[j] + arr[i] == k)
    //         {
    //             count++;
    //         }
    //     }
    // }
    int count = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int b = k - arr[i];
        if (mp[b])
        {
            count += mp[b];
        }
        mp[arr[i]]++;
    }

    return count;
}

int main()
{
    int k = 2;
    int arr[] = {1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(int);
    int ans = solve(arr, n, k);
    cout << ans;
}
