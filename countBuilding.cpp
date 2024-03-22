#include <bits/stdc++.h>
using namespace std;
int countBuildings(int h[], int n)
{
    int count = 1;
    int key = h[0];
    for (int i = 1; i < n; i++)
    {
        if (key < h[i])
        {
            count++;
            key = h[i];
        }
    }
    return count;
}
int main()
{
    int n = 5;
    int arr[] = {7, 4, 8, 2, 9};
    int ans = countBuildings(arr, n);
    cout << ans;
    return 0;
}