/*In a stock market, there is a product with its infinite stocks. The stock prices are given for N days, where price[i] denotes the price of the stock on the ith day.
There is a rule that a customer can buy at most i stock on the ith day.
If the customer has an amount of k amount of money initially. The task is to find out the maximum number of stocks a customer can buy.

Example 1:

Input:
price = [10,7,19]
k = 45
Output:
4
Explanation:
A customer purchases 1 stock on day 1, 2 stocks on day 2 and 1 stock on day 3 for 10, 7 * 2 = 14 and 19 respectively. Hence, total amount is 10 + 14 + 19 = 43 and number of stocks purchased is 4.*/
#include <bits/stdc++.h>
using namespace std;

int buyMaximumProducts(int n, int k, int arr[])
{
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({arr[i], i + 1});
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int price = v[i].first;
        int stock = v[i].second;
        if (price * stock <= k)
        {
            ans += stock;
            k -= price * stock;
        }
        else
        {
            ans += (k / price);
            k -= price * (k / price);
        }
    }
    return ans;
}

int main()
{

    int arr[] = {10, 7, 19};
    int n = sizeof(arr) / sizeof(int);
    int k = 45;
    int ans = buyMaximumProducts(n, k, arr);

    cout << ans;
    return 0;
}
