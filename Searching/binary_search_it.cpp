//binary search iterative 
//we need to find the required element in the sorted array 
//if present then return its index otherwise return -1

/*
compute mid= floor(low+high)/2;
case 1: if(arr[mid]==x)
case 2: if(arr[mid]>x)-->repeat :modify high=mid-1
case 3: if(arr[mid]<x)-->repeat :modify low=mid+1
O(log n)
 time complexity 

 O(1) auxillary space
  */



#include <bits/stdc++.h>
using namespace std;
int Bin_search(int arr[],int n,int x)
{
    int a=0,b=n-1;  
   
    
    while(a<=b)
    {
        int mid=((a+b)/2);
        if(x==arr[mid]) return mid;
        else if(x>arr[mid])
        {
            a=mid+1;
        }
        else if(x<arr[mid]) 
        {
            b=mid-1;
        }
    }  
    return -1; 

}

int main(){
    int n,x;
    cout<<"ENter ther size of array\n";
        cin>>n;
    int arr[n];
    cout<<"ENter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter the number which you want to find\n";
    cin>>x;
    cout<<Bin_search(arr,n,x);
    return 0;
}