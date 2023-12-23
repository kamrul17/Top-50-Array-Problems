/*Given two sorted arrays of distinct elements. There is only 1 difference between the arrays. First array has one element extra added in between. Find the index of the extra element.

Example 1:

Input:
N = 7
A[] = {2,4,6,8,9,10,12}
B[] = {2,4,6,8,10,12}
Output: 4
Explanation: In the second array, 9 is
missing and it's index in the first array
is 4.*/
#include <bits/stdc++.h>
using namespace std;
int findExtra(int a[], int b[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            return i;
    }
    return 0;
}

int main()
{

    int a[] = {2, 4, 6, 8, 9, 10, 12};
    int b[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(a) / sizeof(int);
    int ans = findExtra(a, b, n);
    cout << ans;
}
