//this will print the divisor in sorted order 
//idea is that divisors always occur in pair 
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void divisors(ll n)
{
    int i;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0) cout<<i<<" ";
    }
    i--;    //important or else that last i of for loop will repeat itself  or use the < in aboce for loop instead of <= 
    for(;i>=1;--i)
    {
        if(n%i==0)
        {
           cout<<(n/i)<<" ";
        } 
    }
}
int main(){
    ll n;
    cout<<"Enter the number: ";
    cin>>n;
    divisors(n);
return 0;
}
