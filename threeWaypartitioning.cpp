#include <bits/stdc++.h>
using namespace std;

void threeWayPartition(vector<int> &arr, int a, int b)
{
    int start = 0;
    int curr = 0;
    int end = arr.size() - 1;
    while (curr <= end)
    {
        if (arr[curr] < a)
        {
            swap(arr[curr], arr[start]);
            start++;
            curr++;
        }
        else if (arr[curr] >= a && arr[curr] <= b)
        {
            curr++;
        }
        else if (arr[curr] > b)
        {
            swap(arr[curr], arr[end]);
            end--;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 4};
    int n = 5;
    int a = 1;
    int b = 2;
    threeWayPartition(arr, a, b);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}