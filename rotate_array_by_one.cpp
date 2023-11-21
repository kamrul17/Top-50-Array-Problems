// Given an array, rotate the array by one position in clock-wise direction.
#include <bits/stdc++.h>

using namespace std;
void solve(int arr[], int n)
{
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 5;

    int arr[] = {1, 2, 3, 4, 5};
    solve(arr, n);
}
