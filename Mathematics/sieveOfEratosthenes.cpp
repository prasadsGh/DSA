//problem statement: 
//print all the prime numbers smaller than or equal to given number 
//****Naive approach****
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n==2 or n==3) return true;
    if(n%2==0) return false;
    if(n%3==0) return false;
    for(int i=5;i*i<=n;i+=6)
    {
        if((n%i==0) or(n%(i+2)==0))
        {
            return false;
        }
    }
    return true;
}
void print(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i)) cout<<i<<" ";
    }
}


int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    print(n);
return 0;
}