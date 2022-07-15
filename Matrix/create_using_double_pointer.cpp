#include <bits/stdc++.h>
using namespace std;

int main(){
    int **arr;
//--->creation of array<-----------
    int m=3,n=2;
    arr= new int *[m]; //dyanmically allocating the array of pointers
    for(int i=0;i<m;i++)
        arr[i]=new int[n];
//--->done creating the array<-------
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