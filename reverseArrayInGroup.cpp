#include <bits/stdc++.h>
using namespace std;
void reverseInGroups(vector<long long> &arr, int n, int k)
{
    int s = 0;
    while (s < n)
    {
        int start = s;

        int end = min(s + k - 1, n - 1);
        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }

        s = s + k;
    }
}
int main()
{
    vector<long long> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int k = 3;
    reverseInGroups(arr, n, k);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}