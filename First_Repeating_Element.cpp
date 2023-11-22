/*Given an array arr[] of size n, find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

Note:- The position you return should be according to 1-based indexing. */
#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] > 1)
        {
            return i + 1; // Return the position of the first repeating element as 1 baised index required
        }
    }

    return -1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    int ans = solve(arr, n);
    cout << ans;
}
