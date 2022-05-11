#include <bits/stdc++.h>
using namespace std;

int countdistinct(int arr[], int n)
{
    unordered_set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    return s.size();
}

int main()
{

    int arr[] = {5, 10, 2, 4, 2, 5, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "distinct elements are " << countdistinct(arr, n) << endl;

    return 0;
}