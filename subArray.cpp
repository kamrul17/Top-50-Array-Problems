#include <bits/stdc++.h>
using namespace std;
vector<int> subarraySum(int arr[], int n, int s)
{
    vector<int> result;
    int l = 0, r = 0;
    int sum = arr[0];
    bool isfound = false;
    if (s == 0 && arr[0] != 0)
    {
        result.push_back(-1);
        return result;
    }

    while (r < n)
    {
        if (sum == s)
        {
            isfound = true;
            break;
        }
        else if (sum < s)
        {
            r++;
            if (r < n)
            {
                sum += arr[r];
            }
        }
        else
        {
            sum -= arr[l];
            l++;
        }
    }
    if (isfound)
    {
        result.push_back(l + 1);
        result.push_back(r + 1);
        return result;
    }

    result.push_back(-1);
    return result;
}

int main()
{

    int arr[] = {0};
    // int arr[] = {1, 2, 3, 7, 5};
    int n = sizeof(arr) / sizeof(int);
    int k = 0;
    vector<int> ans = subarraySum(arr, n, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
