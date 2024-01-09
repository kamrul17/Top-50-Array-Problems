#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    unordered_set<int> unionSet;

    for (int i = 0; i < n; ++i)
    {
        unionSet.insert(a[i]);
    }

    for (int i = 0; i < m; ++i)
    {
        unionSet.insert(b[i]);
    }

    return unionSet.size();
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3};
    int n = sizeof(a) / sizeof(int);
    int m = sizeof(b) / sizeof(int);
    int ans = doUnion(a, n, b, m);
    cout << ans;
    return 0;
}