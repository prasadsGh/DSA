//calculate te traililng zeroes in the factorial pf a number 
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int gettrail(ll n)
{
    int count=0,temp=n,num=5;
    while(temp>=num)
    {
        count+=floor(temp/num);
        num*=5;
    }
    return count;
}
int main(){
    ll n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Trailing zeroes are: "<<gettrail(n)<<"\n";
return 0;
}