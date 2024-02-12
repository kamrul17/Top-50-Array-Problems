#include <iostream>
using namespace std;
long long sequence(int n)
{
    int k = 2;
    int mod = 1e9 + 7;
    long long ans = 1;
    for (int i = 2; i <= n; i++)
    {
        long long t = 1;
        for (int j = 1; j <= i; j++)
        {
            t = (t * k) % mod;
            k++;
        }
        ans = (ans + t) % mod;
    }
    return ans;
}
int main()
{

    int n = 5;

    long long ans = sequence(n);
    cout << ans;

    return 0;
}