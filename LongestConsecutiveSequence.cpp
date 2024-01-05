/*There is an integer array ‘A’ of size ‘N’.

A sequence is successive when the adjacent elements of the sequence have a difference of 1.

You must return the length of the longest successive sequence.

Note:

You can reorder the array to form a sequence.
For example,

Input:
A = [5, 8, 3, 2, 1, 4], N = 6
Output:
5*/
#include <bits/stdc++.h>
using namespace std;
// brute force
/*bool search(vector<int> &a, int num)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            return true;
        }
    }
    return false;
}

int longestSuccessiveElements(vector<int> &a)
{
    int n = a.size();

    int longest = 1;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        int x = a[i];
        while (search(a, x + 1) == true)
        {
            count += 1;
            x += 1;
        }

        longest = max(longest, count);
    }
    return longest;
}*/
int longestSuccessiveElements(vector<int> &a)
{
    int n = a.size();
    int lastsmaller = INT_MIN;
    int count = 0;
    int longest = 1;
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (a[i] - 1 == lastsmaller)
        {
            count++;
            lastsmaller = a[i];
        }
        else if (a[i] != lastsmaller)
        {
            count = 1;
            lastsmaller = a[i];
        }

        longest = max(longest, count);
    }
    return longest;
}
int main()
{
    vector<int> a = {100, 200, 1, 3, 2, 4};
    int ans = longestSuccessiveElements(a);
    cout << ans;
    return 0;
}