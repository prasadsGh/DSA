//we will use Euclidean algorithm to find the gcd of the two numbers

#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);

}

int main(){\
ll a,b;
cout<<"Enter the number1: ";
cin>>a;
cout<<"Enter the number2: ";
cin>>b;
cout<<"The GCD is "<<gcd(a,b)<<"\n";

return 0;
}
//remember gcd(a,b)*lcm(a,b)=(a*b)
