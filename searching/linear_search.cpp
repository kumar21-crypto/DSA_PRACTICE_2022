#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int x)
{
    int index = -1;
    int count = 0;

    for(int i=0;i<n;i++)
    {
        count++;
        if(arr[i]==x){
            index = i;
            break;
        }
    }
    cout<<"the count is "<<count<<endl;
    return index;
}

int main()
{
    int arr[] = {2,3,4,8,10,12,15};
    int n = 7;

    int res = linear_search(arr,n,15);

    if(res==-1)
    {
        cout<<"number is not present"<<endl;
    }
    else{
        cout<<"number is present at "<<res<<" index"<<endl;
    }

    return 0;
}