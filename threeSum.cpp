#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(int n, vector<int> &arr)
{

    set<vector<int>> set;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    set.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(set.begin(), set.end());
    return ans;
}

/*vector<vector<int>> findTriplets(int n, vector<int> &arr)
{
    set<vector<int>> st;

    for (int i = 0; i < n; i++)
    {
        set<int> hashset;
        for (int j = i + 1; j < n; j++)
        {
            // Calculate the 3rd element:
            int third = -(arr[i] + arr[j]);

            // Find the element in the set:
            if (hashset.find(third) != hashset.end())
            {
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }

    // store the set in the answer:
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}*/
void printTriplets(const vector<vector<int>> &triplets)
{
    for (const vector<int> &triplet : triplets)
    {
        cout << "(" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ") ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {-1, -1, 2, 0, 1};
    int n = arr.size();
    vector<vector<int>> triplets = findTriplets(n, arr);
    printTriplets(triplets);
    return 0;
}