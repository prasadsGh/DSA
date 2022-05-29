//palindrome number 
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void pali(ll n)
{
    ll temp=n;
    int newnum=0;
    while(temp>0)
    {
        newnum+=temp%10;
        newnum*=10;
        temp/=10;
    }
    newnum/=10;
    if(newnum==n) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    cout<<"Enter the number: ";
    ll n;
    cin>>n;
    pali(n);
return 0;
}