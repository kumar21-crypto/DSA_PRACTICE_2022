#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int n)
{
    int min, s = 0;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }

        if (arr[i] != arr[min])
        {
            s++;
            swap(&arr[i], &arr[min]);
        }
    }

    cout << "s is " << s << endl;
}

int main()
{
    

    int arr[] = {7 ,16, 14, 17 ,6, 9, 5, 3, 18};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    selection_sort(arr, size);
    printArray(arr, size);

    return 0;
}