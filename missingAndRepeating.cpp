#include <bits/stdc++.h>
using namespace std;
// brute force
vector<int> findTwoElement(vector<int> arr, int n)
{
    int missing = -1, repeating = -1;

    int hash[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 2)
        {
            repeating = i;
        }
        else if (hash[i] == 0)
        {
            missing = i;
        }
        if (repeating != -1 && missing != -1)
        {
            break;
        }
    }

    return {repeating, missing};
}
// vector<int> findTwoElement(vector<int> arr, int n)
// {
//     int missing = -1, repeating = -1;

//     for (int i = 1; i <= n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] == i)
//             {
//                 count++;
//             }
//         }
//         if (count == 2)
//         {
//             repeating = i;
//         }
//         else if (count == 0)
//         {
//             missing = i;
//         }
//         if (repeating != -1 && missing != -1)
//         {
//             break;
//         }
//     }
//     return {repeating, missing};
// }
int main()
{
    vector<int> arr = {2, 2};
    int n = arr.size();
    vector<int>
        ans = findTwoElement(arr, n);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";

    return 0;
}