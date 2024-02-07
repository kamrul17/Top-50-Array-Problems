#include <iostream>
#include <unordered_set>
using namespace std;

int NumberofElementsInIntersection(int a[], int b[], int n, int m)
{
    unordered_set<int> set;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        set.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        if (set.find(b[i]) != set.end())
        {
            count++;
            set.erase(b[i]);
        }
    }
    return count;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    int intersectionCount = NumberofElementsInIntersection(a, b, n, m);
    cout << "Count of elements in intersection: " << intersectionCount << endl;

    return 0;
}
