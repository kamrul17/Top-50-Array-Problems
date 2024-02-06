#include <iostream>

using namespace std;
bool arraySortedOrNot(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i] <= arr[i + 1])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int arr[] = {5, 2, 8, 1, 7};
    int n = sizeof(arr) / sizeof(int);

    if (arraySortedOrNot(arr, n))
    {
        cout << "YEs";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
