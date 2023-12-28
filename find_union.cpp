#include <bits/stdc++.h>
using namespace std;
// using two pointer approach
vector<int> findUnion(int arr1[], int n, int arr2[], int m)
{

    int i = 0, j = 0;
    vector<int> Union;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (Union.size() == 0 || Union.back() != arr1[i])
            {
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (Union.size() == 0 || Union.back() != arr2[j])
            {
                Union.push_back(arr2[j]);
            }

            j++;
        }
    }
    while (i < n)
    {
        if (Union.back() != arr1[i])
        {
            Union.push_back(arr1[i]);
        }

        i++;
    }
    while (j < m)
    {
        if (Union.back() != arr2[j])
        {
            Union.push_back(arr2[j]);
        }

        j++;
    }
    return Union;
}

int main()
{
    int arr1[] = {1, 2, 3, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 2, 4};
    int m = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Union of two arrays is: ";
    vector<int> ans = findUnion(arr1, n, arr2, m);

    for (auto &&i : ans)
    {
        cout << i << " ";
    }

    return 0;
}
