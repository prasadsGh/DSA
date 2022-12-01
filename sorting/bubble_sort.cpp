#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    int n=10;
    int k=n;
    int temp=arr[0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j+1<k;j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }
        k--;
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}