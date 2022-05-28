//iterative approach
/*
in this approach-->just take a for loop and derive the factrial

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int fact(ll n)
{
    if(n==0) return 1;
    return n*fact(n-1);

}
int main(){
    cout<<"Enter a number ";
    ll n;
    cin>>n;
    cout<<fact(n);
    
return 0;
}