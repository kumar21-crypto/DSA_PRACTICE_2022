#include <iostream>
using namespace std;

void printArray(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertion_sort(int arr[], int n)
{
    int key, j;

    for (int i = 1; i <= n - 1; i++)
    {
        key = arr[i];
        j = i - 1;

        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {5, 3, 4, 9, 8};
    int n = 5;

    printArray(arr);
    insertion_sort(arr, n);
    printArray(arr);

    return 0;
}