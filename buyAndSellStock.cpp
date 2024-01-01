#include <bits/stdc++.h>
using namespace std;
int bestTimeToBuyAndSellStock(vector<int> &prices)
{
    int mini = prices[0];
    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        int cost = prices[i] - mini;
        profit = max(profit, cost);
        mini = min(mini, prices[i]);
    }
    return profit;
}

int main()
{

    vector<int> prices = {7, 1, 5, 4, 3, 6};

    int ans = bestTimeToBuyAndSellStock(prices);
    cout << ans;
}
