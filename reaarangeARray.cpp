/*There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

Note: Start the array with positive elements.

Examples:

Example 1:

Input:
arr[] = {1,2,-4,-5}, N = 4
Output:
1 -4 2 -5*/

#include <bits/stdc++.h>
using namespace std;
// brute force
/*vector<int> RearrangebySign(vector<int> A, int n)
{

    vector<int> positive;
    vector<int> negative;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            positive.push_back(A[i]);
        }
        else
        {
            negative.push_back(A[i]);
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        A[2 * i] = positive[i];
        A[2 * i + 1] = negative[i];
    }
    return A;
}*/
vector<int> RearrangebySign(vector<int> A, int n)
{
    int posiIndex = 0, negIndex = 1;
    int n = A.size();
    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (A[i] > 0)
        {
            ans[posiIndex] = A[i];
            posiIndex += 2;
        }
        else
        {
            ans[negIndex] = A[i];
            negIndex += 2;
        }
    }

    return ans;
}

int main()
{

    int n = 4;
    vector<int> A = {1, 2, -4, -5};

    vector<int> ans = RearrangebySign(A, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}