//binary search in recursive way
//if number is present in the sorted array then return its index otherwise return -1;

//o(log n) for time complexity
//o(log n) for space complexity (Auxillary space)
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int a,int b, int x)
{
    if(a>b) return -1; //base case
   int mid=(a+b)/2;
   if(arr[mid]==x) return mid;
   else if(arr[mid]>x) return binarySearch(arr,a,mid-1,x);
   else if(arr[mid]<x) return binarySearch(arr,mid+1,b,x);
   
}
int main(){
    int n,x;
    cout<<"ENter the number of elements\n";
    cin>>n;
    int arr[n];
    cout<<"ENter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter the element to be find\n";
    cin>>x;
    int a=0,b=n-1;

    cout<<binarySearch(arr,a,b,x)<<endl;
return 0;
}