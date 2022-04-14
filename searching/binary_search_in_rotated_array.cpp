#include <iostream>
using namespace std;

int binary_search(int arr[], int x, int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid]==x)
        {
            return mid;
        }

        if (arr[low] < arr[mid])
        {
            if (x >= arr[low] && x <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (x >= arr[mid] && x <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return -1;
}

int main()
{

    int arr[] = {20, 30, 40, 50, 60, 5, 10};

    int res = binary_search(arr, 10, 7);

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