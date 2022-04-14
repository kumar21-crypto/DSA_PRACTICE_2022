#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int size)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (n > arr[mid])
        {
            low = mid + 1;
        }
        else if (n < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            if (n == arr[mid])
            {
                return mid;
            }
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 8, 10, 12, 15};

    int res = binary_search(arr, 15, 7);

    if (res == -1)
    {
        cout << "number is not present" << endl;
    }
    else
    {
        cout << "number is present at " << res << " index" << endl;
    }

    return 0;
}