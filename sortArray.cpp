#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> myVector = {5, 2, 8, 1, 7};

    sort(myVector.begin(), myVector.end(), greater<int>());

        cout << "Sorted Vector (Descending): ";
    for (int num : myVector)
    {
        cout << num << " ";
    }

    return 0;
}
