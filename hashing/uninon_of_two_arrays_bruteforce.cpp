#include <bits/stdc++.h>
using namespace std;

int union_of_two_array(int arr1[], int arr2[], int n1, int n2)
{
    int n = n1 + n2;
    int arr[n];
    int t = 0;

    // merge both array
    
    for (int i = 0; i < n1; i++)
    {
        arr[i] = arr1[i];
        t++;
    }

    for (int j = 0; j < n; j++)
    {
        arr[t] = arr2[j];
        t++;
    }

    // count distinct element in arr

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

    int arr1[] = {5, 10, 15, 5};
    int arr2[] = {10, 15, 4, 5};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "union arrays count are " << union_of_two_array(arr1, arr2, n1, n2) << endl;

    return 0;
}