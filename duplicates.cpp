// Find duplicates in an array
#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int n)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {

        if (it.second > 1)
        {
            cout << it.first;
        }
    }
}

int main()
{
    int n = 5;

    int arr[] = {1, 2, 1, 4, 2};
    solve(arr, n);
}
