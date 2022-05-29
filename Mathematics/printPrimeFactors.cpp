//this is code os most efficient approach--> for other codes please refer the notes
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void printPrimeFactors(ll n)
{
    if(n<=1) return ;
    if(n%2==0)
    {
        while(n%2==0)
        {
            cout<<"2"<<" ";
            n/=2;
        }
    }
     if(n%3==0)
    {
        while(n%3==0)
        {
            cout<<"3"<<" ";
            n/=3;
        }
    }

    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            n/=i;
        }

        if(n%(i+2)==0)
        {
            cout<<(i+2)<<" ";
            n/=(i+2);
        }
    }
    if(n>3) cout<<n<<" ";
}
int main(){
    ll n;
    cout<<"Enter the number ";
    cin>>n;
    printPrimeFactors(n);
    cout<<"\n";
return 0;
}