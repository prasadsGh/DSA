#include <bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k) return true;

    }
    return false;
}
int main(){
    int n;
    bool repeat= true;
    string choice;
    while(repeat)
    {

    cout<<"How many numbers are there gonna be ?\n ";
     cin>>n;
     int arr[n];
     cout<<"Enter the numbers: \n";
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int k;
     cout<<"Which number you wanna find?\n";
     cin>> k;
     if(linearSearch(arr,n,k)) cout<<"Founded\n";
     else cout<<"Not founded\n";
     cout<<"Do you wanna continue?(yes/no)\n";
     cin>>choice;
     if(choice=="yes") repeat=true;
     else if(choice=="no") repeat=false;
     else 
     {
         cout<<"Invalid choice!\n";
         repeat=false;
     }
    }
   

return 0;
}