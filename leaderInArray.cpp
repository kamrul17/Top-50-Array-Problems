#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(int a[], int n)
{
    vector<int> ans;
    int maxRight = a[n - 1];
    ans.push_back(maxRight);
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] >= maxRight)
        {
            maxRight = a[i];
            ans.push_back(a[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(int);
    vector<int> ans = leaders(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
