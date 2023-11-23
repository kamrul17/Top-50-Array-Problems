// Non-Repeating Element
#include <bits/stdc++.h>
using namespace std;
int firstNonRepeating(int arr[], int n)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto value : mpp)
    {
        cout << value.first << " " << value.second << endl;
    }
    cout << " ----------" << endl;
    for (int i = 0; i < n; i++)
    {
        if (mpp[arr[i]] == 1)
        {
            return arr[i];
        }
    }

    return -1;
}
int main()
{

    int arr[] = {19, 3, 16, 11};
    // int arr[] = {-1, -17, -12, 8, 16, -17, -13, -14, -3, -6, -5, -11, -10, -12, -5, 19, -17, -5, -1, 12};
    int n = sizeof(arr) / sizeof(int);

    int ans = firstNonRepeating(arr, n);
    cout << ans;
}
