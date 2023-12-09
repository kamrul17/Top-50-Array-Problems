#include <iostream>
using namespace std;

int peakElement(int arr[], int n)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        {
            return mid;
        }

        // If the element to the left is greater, move left
        else if (mid > 0 && arr[mid - 1] > arr[mid])
        {
            end = mid - 1;
        }

        // If the element to the right is greater, move right
        else
        {
            start = mid + 1;
        }
    }

    // No peak found
    return 0;
}

int main()
{

    int arr[] = {3, 7, 0, 1, 5};
    int n = sizeof(arr) / sizeof(int);

    int ans = peakElement(arr, n);
    cout << ans;

    return 0;
}