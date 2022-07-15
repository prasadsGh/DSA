#include <bits/stdc++.h>
using namespace std;

int main(){
    int m=3,n=2;
    //---->creation of matrix--->>>>>>>>>>
    int *arr[m];   //creating array of pointers with statically allocated memory
    for(int i=0;i<m;i++)
    {
        arr[i]=new int [n];
    }
//------------->>>>>>><<<<<<<<<<<<<---------------
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

return 0;
}