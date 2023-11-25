#include <bits/stdc++.h>
using namespace std;
// brute force
// int subarraySum(int arr[], int n, int k)
// {
//     int count = 0;
//     vector<int> list;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             if (sum == k)
//             {
//                 count++;
//             }
//         }
//     }

//     return count;
// }
// optimal using hashmap
int subarraySum(int arr[], int n, int k)
{
    int count = 0;
    unordered_map<int, int> mpp;
    int presum = 0;
    mpp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        presum += arr[i];
        int remove = presum - k;
        if (mpp[remove])
        {
            count++;
        }
        mpp[presum]++;
    }

    return count;
}
int main()
{

    int arr[] = {9, 6, 3, 5, 2};
    int n = sizeof(arr) / sizeof(int);
    int k = 9;
    int ans = subarraySum(arr, n, k);
    cout << ans;

    return 0;
}
