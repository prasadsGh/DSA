#include <bits/stdc++.h>
using namespace std;

int main(){
    int m=3,n=2;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=10;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"------------------------------------------------------------\n";

    int arr1[3][2]={{2,3},{4,5},{6,7}};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }  
    
return 0;
}