/*MAXIMUM SUBARRAY SUM
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.*/
#include <bits/stdc++.h>
using namespace std;
/*long long maxSubarraySum(int arr[], int n)
{
    long long maxi = LONG_MIN;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}*/
// TYPE-2 : PRINT MAXIMUM SUBARRAY SUM
vector<int> maxSubarraySum(int arr[], int n)
{
    int maxi = INT_MIN;
    int sum = 0;
    int ansStartingIndex = -1;
    int ansEndingIndex = -1;
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }

        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
            ansStartingIndex = start;
            ansEndingIndex = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    vector<int> result;
    // PRINTING first and last index
    result.push_back(ansStartingIndex);
    result.push_back(ansEndingIndex);
    // // PRINTING first to last index
    // for (int i = ansStartingIndex; i <= ansEndingIndex; i++)
    // {
    //     result.push_back(arr[i]);
    // }
    return result;
    // cout << ansStartingIndex << " " << ansEndingIndex << endl;
}
int main()
{

    int arr[] = {1, 2, 3, -7, 5};
    int n = sizeof(arr) / sizeof(int);

    vector<int> ans = maxSubarraySum(arr, n);
    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << endl;
    }

    return 0;
}
// int main()
// {

//     int arr[] = {1, 2, 3, -7, 5};
//     int n = sizeof(arr) / sizeof(int);

//     long long ans = maxSubarraySum(arr, n);
//     cout << ans;
//     return 0;
// }
