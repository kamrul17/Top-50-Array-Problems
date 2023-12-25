#include <iostream>
using namespace std;

int lowerBound(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;

            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int rowWithMax1s(int matrix[][4], int n, int m)
{
    int cnt_max = 0;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        int cnt_ones = m - lowerBound(matrix[i], m, 1);
        if (cnt_ones > cnt_max)
        {
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}
// brute force
// int rowWithMax1s(int arr[][4], int n, int m)
// {
//     int index = -1;
//     int maxCount = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int countRow = 0;
//         for (int j = 0; j < m; j++)
//         {
//             countRow += arr[i][j];
//         }
//         if (countRow > maxCount)
//         {
//             maxCount = countRow;
//             index = i;
//         }
//     }
//     return index;
// }
int main()
{
    int n = 4, m = 4;

    int arr[4][4] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0};
    int ans = rowWithMax1s(arr, n, m);
    cout << ans;

    return 0;
}