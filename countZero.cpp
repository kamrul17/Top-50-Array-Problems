#include <iostream>
using namespace std;
int countZeroes(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int count = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == 0)
        {
            end = mid - 1;
        }
        else if (arr[mid] > 0)
        {
            start = mid + 1;
        }
    }

    return n - 1 - end;
}
int main()
{
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    int n = sizeof(arr) / sizeof(n);
    int ans = countZeroes(arr, n);
    cout << ans;
    return 0;
}