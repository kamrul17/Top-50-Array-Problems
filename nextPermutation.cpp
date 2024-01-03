#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterPermutation(vector<int> &arr)
{

    next_permutation(arr.begin(), arr.end());
    return arr;
}
int main()
{
    vector<int> arr = {1, 3, 2};
    vector<int> ans = nextGreaterPermutation(arr);
    cout << ans[0] << " " << ans[1] << " " << ans[2];
    return 0;
}