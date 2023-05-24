#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={2 ,1,223, 1 ,4 ,1, 7, 8, 7 ,1};
    int n=10;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        mini=INT_MAX;
        int temp=-1;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<=mini)
            {   
                temp=j;
                mini=arr[j];
            }
        }
        swap(arr[i],arr[temp]);
    }

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}