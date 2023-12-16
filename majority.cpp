/*
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears strictly more than N/2 times in the array.
 */
#include <bits/stdc++.h>
using namespace std;
// brute force
// int solve(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == arr[i])
//             {
//                 count++;
//             }
//             if (count > n / 2)
//             {
//                 return arr[i];
//             }
//         }
//     }
//     return -1;
// }
// better
// int solve(int arr[], int n)
// {
//     unordered_map<int, int> mpp;

//     for (int i = 0; i < n; i++)
//     {
//         mpp[arr[i]]++;
//     }
//     for (auto value : mpp)
//     {
//         if (value.second > n / 2)
//         {
//             return value.first;
//         }
//     }
//     return -1;
// }
// optimal using MOORE'S ALGORITHM
int solve(int arr[], int n)
{
    int count = 0;
    int element;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            element = arr[i];
        }
        else if (arr[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count1++;
        }
    }
    if (count1 > n / 2)

    {
        return element;
    }
    return -1;
}
int main()
{

    int arr[] = {3, 13, 13, 13, 2};
    int n = sizeof(arr) / sizeof(int);
    int ans = solve(arr, n);
    cout << ans;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " " << endl;
    // }

    return 0;
}
