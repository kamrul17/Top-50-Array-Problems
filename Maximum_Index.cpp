#include <bits/stdc++.h>
using namespace std;
/*int maxIndexDiff(int arr[], int n)
{
    int maxDiff = 0;
// improve little bit
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < j; i++)
        {
            if (arr[i] <= arr[j] && j - i > maxDiff)
            {
                maxDiff = j - i;
            }
        }
    }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] <= arr[j] && j - i > maxDiff)
    //         {
    //             maxDiff = j - i;
    //         }
    //     }
    // }

    return maxDiff;
}*/
int maxIndexDiff(int A[], int N)
{
    int maxDiff = -1;
    int *leftMin = new int[N];
    int *rightMax = new int[N];

    // Fill leftMin array
    leftMin[0] = A[0];
    for (int i = 1; i < N; i++)
    {
        leftMin[i] = min(leftMin[i - 1], A[i]);
    }

    // Fill rightMax array
    rightMax[N - 1] = A[N - 1];
    for (int i = N - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], A[i]);
    }

    // Traverse both arrays to find the maximum difference
    int i = 0, j = 0;
    while (i < N && j < N)
    {
        if (leftMin[i] < rightMax[j])
        {
            maxDiff = max(maxDiff, j - i);
            j++;
        }
        else
        {
            i++;
        }
    }

    delete[] leftMin;
    delete[] rightMax;

    return maxDiff;
}

int main()
{

    int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = sizeof(arr) / sizeof(int);
    int ans = maxIndexDiff(arr, n);
    cout << ans;
    return 0;
}
