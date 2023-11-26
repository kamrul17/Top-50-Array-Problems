// Sort an array of 0s, 1s and 2s
#include <bits/stdc++.h>
using namespace std;
/*void sort012(int a[], int n)
{
    // sort(a, a + n);
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            count0++;
        }
        else if (a[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    for (int i = 0; i < count0; i++)
    {
        a[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        a[i] = 1;
    }
    for (int i = count0 + count1; i < n; i++)
    {
        a[i] = 2;
    }
}*/
void sort012(int a[], int n)
{

    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
}
int main()
{

    int a[] = {0, 2, 1, 2, 0};
    int n = sizeof(a) / sizeof(int);

    sort012(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
