#include<iostream>
using namespace std;

void swap(int* a,int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {5,4,8,7,1};
    int n = 5;
    printArray(arr,n);
    bubbleSort(arr,n);
    printArray(arr,n);

    return 0;
}