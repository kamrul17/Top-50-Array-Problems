// Move all negative elements to end
#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int n)
{
    vector<int> negative, positive;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negative.push_back(arr[i]);
        }
        else
        {
            if (arr[i] >= 0)
            {
                positive.push_back(arr[i]);
            }
        }
    }
    int i = 0, j = 0, k = 0;
    while (i < positive.size())
    {
        arr[k++] = positive[i++];
    }
    while (j < negative.size())
    {
        arr[k++] = negative[j++];
    }
}

int main()
{

    int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
    int n = sizeof(arr) / sizeof(int);
    solve(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}
