#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 4;
    int ans = binarysearch(arr, n, k);
    cout << ans;
    return 0;
}