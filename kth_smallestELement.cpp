#include <bits/stdc++.h>
using namespace std;
// optimal using heap sort
int kthSmallest(int arr[], int n, int k)
{
    priority_queue<int> maxHeap;
    for (int i = 0; i < n; ++i)
    {
        maxHeap.push(arr[i]);

        if (maxHeap.size() > k)
        {
            maxHeap.pop();
        }
    }
    return maxHeap.top();
}
/*int kthSmallest(int arr[], int n, int k)
{
    if (k > n || k <= 0)
    {

        return -1;
    }

    for (int i = 0; i < n; ++i)
    {
        int count = 0;


        for (int j = 0; j < n; ++j)
        {
            if (arr[j] <= arr[i])
            {
                count++;
            }
        }

        // If count is equal to k, then arr[i] is the Kth smallest element
        if (count == k)
        {
            return arr[i];
        }
    }
    return -1;
}
*/
int main()
{

    int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;
    int ans = kthSmallest(arr, n, k);
    cout << ans;
    return 0;
}
