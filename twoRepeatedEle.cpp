/*You are given an array of N+2 integer elements. All elements of the array are in the range 1 to N. Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers.

Note: Return the numbers in their order of appearing twice. So, if X and Y are the repeating numbers, and X repeats twice before Y repeating twice, then the order should be (X, Y).

Example 1:

Input:
N = 4
array[] = {1,2,1,3,4,3}
Output: 1 3
Explanation: In the given array,
1 and 3 are repeated two times.*/
#include <bits/stdc++.h>
using namespace std;
vector<int> twoRepeated(int a[], int n)
{
    vector<int> ans;

    int hash[n + 1] = {0};
    for (int i = 0; i < n + 2; i++)
    {
        hash[a[i]]++;
        if (hash[a[i]] == 2)
        {
            ans.push_back(a[i]);
        }
    }

    return ans;
}
int main()
{

    int a[] = {1, 2, 1, 3, 4, 3};

    int n = 4;
    vector<int> ans = twoRepeated(a, n);
    cout << ans[0] << " " << ans[1];
}
