/*A sorted(in ascending order) array A[ ] with distinct elements is rotated at some unknown point, the task is to find the minimum element in it.

Example 1

Input:
N = 5
arr[] = {4 ,5 ,1 ,2 ,3}
Output: 1*/
#include <iostream>
#include <vector>
using namespace std;

int findMin(const vector<int> &arr)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }

    return arr[low];
}

int main()
{

    vector<int> arr = {4, 5, 6, 7, 8, 1, 2, 3};
    int result = findMin(arr);

    cout << "Minimum element: " << result << endl;

    return 0;
}
