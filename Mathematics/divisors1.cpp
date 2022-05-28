//this is efficient approach to print the divisors but the print will not be in the sorted order
//idea is that divisors always occur in pair 

#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void divisors(ll n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        if(i!=(n/i)) cout<<(n/i)<<" ";
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