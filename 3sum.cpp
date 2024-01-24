#include <bits/stdc++.h>
using namespace std;
bool findTriplets(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        set<int> hashset;
        for (int j = i + 1; j < n; j++)
        {
            int third = -(arr[i] + arr[j]);
            if (hashset.find(third) != hashset.end())
            {
                return 1;
            }
            hashset.insert(arr[j]);
        }
    }
    return 0;
}
int main()
{
    vector<int> arr = {-1, -1, 2, 0, 1};
    int n = arr.size();
    if (findTriplets)
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }
    return 0;
}