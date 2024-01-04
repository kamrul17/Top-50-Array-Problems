/*There is an integer array ‘a’ of size ‘n’.
An element is called a Superior Element if it is greater than all the elements present to its right.
You must return an array all Superior Elements in the array ‘a’.
Note:
The last element of the array is always a Superior Element.
Example
Input: a = [1, 2, 3, 2], n = 4
Output: 2 3
*/
#include <bits/stdc++.h>
using namespace std;
/*
vector<int> superiorElements(vector<int> &a)
{
    int n = a.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        bool leader = true;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] >= a[i])
            {
                leader = false;
                break;
            }
        }
        if (leader == true)
        {

            ans.push_back(a[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}*/
vector<int> superiorElements(vector<int> &a)
{
    int n = a.size();
    vector<int> ans;
    int maxi = a[n - 1];
    ans.push_back(maxi);
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            ans.push_back(a[i]);
            maxi = a[i];
        }
    }
    return ans;
}
int main()
{

    // Array Initialization.

    vector<int> a = {1, 2, 2, 1};

    vector<int> ans = superiorElements(a);

    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}
