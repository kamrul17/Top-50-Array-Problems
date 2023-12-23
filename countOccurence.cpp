/*
Given an array arr of size N and an element k. The task is to find the count of elements in the array that appear more than n/k times.

Example 1:

Input:
N = 8
arr = [3,1,2,2,1,2,3,3]
k = 4
Output:
2
Explanation:
In the given array, 3 and 2 are the only elements that appears more than n/k times.*/
#include <bits/stdc++.h>
using namespace std;
int countOccurence(int arr[], int n, int k)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int count = 0;
    for (auto it : mp)
    {
        if (it.second > n / k)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    int a[] = {3, 1, 2, 2, 1, 2, 3, 3};
    int k = 4;
    int n = sizeof(a) / sizeof(int);
    int ans = countOccurence(a, n, k);
    cout << ans;
}
