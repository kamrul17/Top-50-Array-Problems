// Alternate positive and negative numbers
/*To solve this problem, you can use the following approach:

->>Separate positive and negative numbers into two separate arrays.
->>merge the positive and negative arrays alternately into the original array.
*/
#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int n)
{
    vector<int> positive, negative;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            positive.push_back(arr[i]);
        }
        else
        {
            negative.push_back(arr[i]);
        }
    }
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < positive.size() && j < negative.size())
    {
        arr[k++] = positive[i++];
        arr[k++] = negative[j++];
    }
    // If there are remaining positive elements,
    while (i < positive.size())
    {
        arr[k++] = positive[i++];
    }
    // If there are remaining negative elements,
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
