//this is the code of most optimised algorithm for other algorithm please refer notes
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
bool isPrime(ll n)
{
    if(n==1) return false;
    if(n==2 or n==3) return true;
    if(n%2==0 or n%3==0) return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0 or n%(i+2)==0) return false;
    }
    return true;
}
int main(){
    ll n;
    cout<<"ENter the number: ";
    cin>>n;
    if(isPrime(n)) cout<<"YES, It is a prime number!\n";
    else cout<<"NO, Its not a prime number!\n";
    
return 0;
}
