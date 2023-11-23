/*Given a sorted array arr[] of size N and a number X, find a pair in array whose sum is closest to X.*/
#include <bits/stdc++.h>
using namespace std;
vector<int> sumClosest(int arr[], int n, int x)
{

    int left = 0, right = n - 1;

    // Initialize variables to keep track of the closest sum and the pair
    int closestSum = INT_MIN;
    // cout << closestSum << endl;
    vector<int> result;

    while (left < right)
    {
        int currentSum = arr[left] + arr[right];

        // Check if the current pair has a sum closer to the target

        if (abs(currentSum - x) < abs(closestSum - x))
        {
            closestSum = currentSum;
            result = {arr[left], arr[right]};
        }

        // Move pointers based on whether the current sum is less or greater than the target
        if (currentSum < x)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return result;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    // int arr[] = {10, 22, 28, 29, 30, 44};

    int n = sizeof(arr) / sizeof(int);
    int x = 10;
    vector<int> ans = sumClosest(arr, n, x);
    cout << ans[0] << ans[1];
}