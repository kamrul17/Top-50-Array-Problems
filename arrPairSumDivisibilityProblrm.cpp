/*Given an array of integers nums and a number k, write a function that returns true if given array can be divided into pairs such that sum of every pair is divisible by k.*/
#include <bits/stdc++.h>
using namespace std;
bool canPair(vector<int> nums, int k)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        int current = nums[i] % k;
        int need = (k - current) % k;
        if (mpp.find(need) != mpp.end())
        {
            mpp[need]--;
            if (mpp[need] == 0)
            {
                mpp.erase(need);
            }
        }
        else
        {
            mpp[current]++;
        }
    }
    return mpp.size() == 0;
}
int main()
{
    vector<int> nums = {9, 5, 7, 3};
    int k = 6;
    if (canPair(nums, k))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}