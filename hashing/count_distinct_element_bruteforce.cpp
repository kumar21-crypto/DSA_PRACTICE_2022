#include <bits/stdc++.h>
using namespace std;

int countdistinct(int arr[], int n)
{
    int i, j, count = 1;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if (i == j)
        {
            count++;
        }
    }

    return count;
}

int main()
{

    int arr[] = {5, 10, 2, 4, 2, 5, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "distinct elements are " << countdistinct(arr, n) << endl;

    return 0;
}