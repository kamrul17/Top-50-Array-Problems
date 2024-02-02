#include <bits/stdc++.h>
using namespace std;
bool checkTriplet(int arr[], int n)
{
    int maxele = arr[0];
    int a, b, c, d;
    for (int i = 1; i < n; i++)
    {
        maxele = max(maxele, arr[i]);
    }
    int count[maxele + 1];
    for (int i = 0; i <= maxele; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 1; i <= maxele; i++)
    {
        for (int j = i + 1; j <= maxele; j++)
        {
            if (count[i] > 0 && count[j] > 0)
            {
                a = i * i;
                b = j * j;
                c = a + b;
                d = sqrt(c);
                if ((d * d) == c && count[d] > 0 && d <= maxele)
                {
                    return true;
                }
            }
        }
    }

    return false;
    // 	   unordered_set<int>squareSet;
    // 	   for(int i=0;i<n;i++){
    // 	       int sqr=arr[i]*arr[i];
    // squareSet.insert(sqr);
    // 	   }
    // 	   for(int i=0;i<n-1;i++){
    // 	       for(int j=i+1;j<n;j++){
    // 	           int findNum=arr[i]*arr[i]+arr[j]*arr[j];
    // 	          if(squareSet.find(findNum)!=squareSet.end()){
    // 	              return true;
    // 	          }
    // 	       }
    // 	   }
    // 	   return false;
}

int main()
{
    int arr[] = {3, 2, 4, 6, 5};
    int n = sizeof(arr) / sizeof(int);
    if (checkTriplet(arr, n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NOt";
    }

    return 0;
}