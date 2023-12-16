/*Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.

*/
#include <bits/stdc++.h>
using namespace std;
bool find3Numbers(int a[], int n, int X)
{
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        int c = a[i];
        int s = i + 1;
        int e = n - 1;
        int t = X - c;
        while (s < e)
        {
            if (a[s] + a[e] == t)
            {
                return true;
            }
            else if (a[s] + a[e] < t)
            {
                s++;
            }
            else
            {
                e--;
            }
        }
    }
    return false;
}
int main()
{

    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(arr) / sizeof(int);
    int x = 13;
    int ans = find3Numbers(arr, n, x);
    cout << ans;

    return 0;
}
